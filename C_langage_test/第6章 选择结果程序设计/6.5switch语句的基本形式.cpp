/* 6.5.1 switch���Ļ�����ʽ

switch����Ƕ��֧ѡ����䡣switch����һ����ʽ:

switch(���ʽ){
    case ��� 1:
        ���� 1;
        break;
    case ��� 2:
        ���� 2;
        break;
    ...
    case ��� n:
        ���� n;
        break;
    default:
        Ĭ���������;
        break;
}

switch�ı��ʽ����Ҫ�����жϵ�������
��switch�������У�case�ؼ��ֱ�ʾ�����������ϵĸ�������������������Ӧ�Ĳ�����
���л���һ��default�ؼ��֣����������û�з����������������ôִ��default���Ĭ�������䡣

ע��:
switch�����������������һ�����ͱ��ʽ����ζ������Ҳ���԰���������ͺ������á�
��case�������ֵ���������ͳ��������������ʽ���߳������㡣

 */
#include<stdio.h>
int main(){
    switch (selection)//selection�β�ûֵ�����Ըó����޷�ִ�С�
    {
    case 1:
        printf("Processing Receivables\n");
        break;
    
    case 2:
        printf("Processing Payables\n");
        break;
    case 3:
        printf("Quitting\n");
        break;
    
    default:
        printf("Error\n");
        break;
    }
}
/* �������������switch�ж�selection������ֵ������case������selection��ֵ�Ĳ�ͬ�����
����selection��ֵΪ2����ôִ��caseΪ2ʱ�������ִ�к�����switch��䡣
���selection��ֵ����case���������г����������ôִ��default�е���䡣��ÿһ��case��default������һ��break�ؼ��֡�
break�����������switch�ṹ������ִ��switch����Ĵ��롣
 */
/* ע��:��ʹ��switch���ʱ�����û��һ��case�������ֵ��ƥ��switch������������ִ��defaul������Ĵ��룬
���У���������case��䶼����ʹ����ͬ�ĳ���ֵ��ÿ��switch�ṹֻ����һ��default��䣬default����ʡ�ԡ� */