/* eg 7.5ʹ��while���ģ��for����һ����ʽ
��ʹ��for���ʵ��һ����ѭ�����ܵĲ�������ʹ��while���ʵ����ͬ�Ĺ��ܡ�ע��for����еı��ʽ��while����еı��ʽ����Ӧ��λ�� */
#include<stdio.h>

int main(){
    int iNumber;//�������,��ʾ1~100֮�������
    int iSum=0;//��������Ľ��
    for (iNumber=0;iNumber<=100;iNumber++)//iNumberΪѭ������
    {
        iSum=iNumber+iSum;//�ۼӼ���
    }
    printf("The result is:%d\n",iNumber);//���������

    iSum=0;//�ָ�������
    iNumber=1;//�趨ѭ�����Ʊ����ĳ�ֵ

    while (iNumber<=100)
    {
        iSum=iSum+iNumber;//�ۼӼ���
        iNumber++;//ѭ����������
    }
    printf("The result is:%d\n",iSum);//���������
    return 0;
    
}