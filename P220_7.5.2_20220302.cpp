/* 
7.5.2变量的存储方式和生存期
变量的生存期，即变量值存在的时间。
变量的存储有两种不同的方式:静态存储方式和动态存储方式。
    静态存储方式指程序运行期间由系统在静态存储区分配存储空间的方式，程序运行期间不释放。
    动态存储方式则在函数调用期间根据需要在动态存储区分配存储空间的方式。

  全局变量采用静态存储方式，程序开始执行时给全局变量分配存储区，程序执行完毕释放；
        程序执行过程中占据固定的存储单元，不是动态进行分配和释放
  函数中定义的变量，在函数调用开始分配动态存储空间，函数结束时释放这些空间。
        程序执行过程中，分配和释放是动态的。

   每一个变量和函数有两个属性:数据类型和数据的存储类别。
        1.auto-声明自动变量
        函数中的形参和在函数中定义的变量，都属于此类。
        在调用该函数四，系统给这些变量分配存储空间，在函数调用结束时自动释放这些存储空间。
        这类局部变量称为自动变量，自动变量用关键字auto作存储类别的声明。
            auto int b,c=3;
        关键字auto可以省略，属于动态存储方式。函数中大多数变量属于自动变量。

        2.static-声明静态变量
        函数中的局部变量的值在函数调用结束后不消失而继续保留原值，占用的存储单元不释放，
        在下一次该函数调用时，该变量已有值，为上一次函数调用结束时的值。应用关键字static 指定该局部变量为""静态局部变量"

        3.register-声明寄存器变量
        变量(包括静态存储方式和动态存储方式)的值是存放在内存中的。当程序中用到哪个一个变量的值时，
        由控制器发出指令将内存中该变量的值送到运算器中。经过运算器进行运算，如果需要存数，再从运算器将数据送到内存存放。
        为提高执行效率，C语言允许将局部变量的值放在CPU中的寄存器(寄存器一种超高速的存储器)，需要用时直接从寄存器取出参加运算，
        由于对寄存器的存取速度远高于内存的存取速度，因此这样做可以提高执行效率。这种变量叫作寄存器变量，用关键字register作声明。

        register int f;//定义f为寄存器变量
        优化的编译系统能够识别使用频繁的变量，从而自动地将这些变量放在寄存器中，而不需要程序设计者指定。实际上用register声明变量是不必要的。

        4.extern-声明外部变量的作用范围。
        1)在一个文件内扩展外部变量的作用域。如果由于某种考虑，在定义点之前的函数需要引用该外部变量，
        则应该在引用之前用关键字extern对该变量作""外部变量声明"，
            example:extern A:表示把该外部变量A的作用域扩展到此位置。有了此声明，就可以从""声明"处起，合法地使用该外部变量。
        
        2)将外部变量的作用域扩展到其他文件
        一个程序包含两个文件，在两个文件中都要用到同一个外部变量Num，不能分别在两个文件中各自定义一个外部变量Num，
        否则在进行程序的连接时会出现""重复定义"的错误。
            正确的做法是:在任一个文件中定义外部变量Num，而在另一个文件中用extern对Num作""外部变量声明"。""extern Num".
        在编译和连接时，系统由此可知Num是一个已在别处定义的外部变量，并将在另一个文件中定义的外部变量的作用域扩展到本文件，在本文件中可以合法地引用外部变量Num。

        对一个数据的定义，需要指定两种属性:数据类型和存储类别，分别使用两个关键字。
            static int a;//静态内部整型变量或静态外部整型变量
            auto char a;//自动变量，在函数内定义
            register int d;//寄存器变量，在函数内定义
            可以用extern声明已定义的外部变量，
            extern b;//声明b将已定义的外部变量b的作用域扩展至此


        example 7.12输出 1~5的阶乘值
            编写一个函数一次累乘，第一次调用时进行1乘1，第二次调用时在乘以2，第三次调用时在乘以3。
            将上一次求出的连乘保留，下一次再乘上一个数。用static来指定变量不释放，保留原值。
 */
#include<stdio.h>
int num(int n){
    static int f=1;//f保留上次调用结束时的值
    f=f*n;//在上次的f值的基础上在乘以n
    return(f);//返回值f是n!的值
}
int main()
{
    int num(int n);
    int i;
    for(i=1;i<=5;i++)//5次调用num函数
        printf("%d!=%d\n",i,num(i));//每次计算并输出i!的值
    return 0;
}
/* 
analyse:
1.在定义局部变量时不赋初值，则对静态局部变量来说，编译时自动赋初值0(对数值型变量)或空字符(对字符变量)。
对自动变量来说，如果不赋初值则它的值是一个不确定的值。
这是由于每次函数调用结束后存储单元已释放，下次调用时有重新另外分配存储单元，而所分配的单元中的值是不可知的
2.静态存储要多占内存(长期占用不释放，而不能像动态存储那样一个存储单元可供多个变量使用，节约内存)，
而且降低程序的可读性，当调用次数多时往往弄不清楚静态局部变量的当前值是什么。

加上static声明，只能用于本文件的外部变量称为静态外部变量。
*/