/* ��������ͳһΪ4���ַ� */
#include<stdio.h>
int main(){/* ������ */
    int iResult=0;/* ������� */
    int i;
    printf("The result of going from 1 to 100 is :");/* ��1�ӵ�100�Ľ���� ������ */
    for(i=1;i<100;i++){
        iResult=i+iResult;
    }
    printf("%d\n",iResult);/* ������ */
    return 0;/* ������� */
}