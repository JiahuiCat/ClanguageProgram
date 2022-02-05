#include<stdio.h>
/* 在定义函数时函数后后面括号中的变量名称为形式参数（简称形参），如例7.2程序中定义max函数时括号中的x和y。在主调函数中调用一个函数时
函数后面括号中的参数（可以是一个表达式）称为实际参数（简称实参），如main函数中用到的max（a,b）中的a和b。
函数调用的过程:
（1）在定义函数中指定的形参，在未出现函数调用时，它们并不占用内存中的存储单元。在发生函数调用时，函数max中的形参被分配内存单元。
（2）将实参对应的值传递给形参。实参的值为2，把2传递给相应的形参x，这时形参x就得到值2，同理，形参y得到值3
（3）在执行max函数期间，由于形参已经有值，就可以进行有关的运算
（4）通过return语句将函数值带回到主调函数
（5）调用结束，形参单元被释放。
（6）调用函数的方式
    1.函数语句
    2.函数表达式
    3.函数参数
     */
/*关于使用函数声明的说明：
（1）如果被调用函数的定义出现在主调函数之前，可以不必加以声明。因为编译系统已经先知道了一定义函数的有关情况，
会根据函数首部提供的信息对函数的调用作出正确性检查。
把例7.2改写（把main函数放在max函数的后面），就不必在main函数中对max声明。*/
int max(int x,int y)//定义max函数
{
    int z;
    if(x>y)
    z=x;
    else z=y;
    return(z);
}
int main(){//主函数在max定义位置的后面
    int a,b,c;//不需要在主函数中对max函数进行声明
    printf("please input two number:");
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max is %d\n",c);
    return 0;
}