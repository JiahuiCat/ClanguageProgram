#include <stdio.h>

/* if...else�����ʽ
if-else����ָ��������Ϊ��ʱִ��ĳЩ����⣬������������Ϊ��ʱִ������һ�δ��롣

if(���ʽ)
    ����1;
else
    ����2;

*/
int main()
{
    int iNumber;                                        /* �������*/
    printf("Enter a number\n");                         /* �����ʾ��Ϣ */
    scanf("%d", &iNumber);                              /* �������� */
    if (iNumber)                                        /* �жϱ�����ֵ */
    {
        printf("the Value is true and the number is:%d\n",iNumber); /* �ж�Ϊ��ʱִ����� */
    }
    else /* ����Ҫ����ж�����,�жϽ��Ϊ��ʱ������ */
    {
        printf("the Value is false and the number is:%d\n", iNumber);
    }
    return 0;
}


