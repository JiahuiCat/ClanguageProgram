/* 7.4.3 for����еĶ���Ӧ��
for����У����ʽ1�ͱ��ʽ3�������˿���ʹ�ü򵥵ı��ʽ�⣬������ʹ�ö��ű��ʽ��
    ��for(iSum=0,iCount=1;iCount<10;iCount++){
        iSum=iCount+iSum;
    }
    
    ����ִ��ѭ�������ԼӲ������Σ�
    ��for(iCount=0;iCount<10;iCount++,iCount++){
        iSum=iSum+iCount;
    } 
    �൱��
    for(iCount=0;iCount<10;iCount=iCount+2){

    }
    eg7.7����1~100֮������ż�����ۼӽ����
        Ϊ��������ֵ�Ĳ���������for����У����Ҷ�ѭ���������������ԼӲ���������������Ľ����������ż��֮�͡�
    */
#include<stdio.h>
int main(){
    int iSum,iCount;//�������
    //��forѭ���У�Ϊ������ֵ����ѭ����������������������
    for (iSum=0,iCount=0;iCount<=100;iCount++,iCount++)
    {
        iSum=iSum+iCount;//�����ۼӼ���
    }
    printf("The result is:%d\n",iSum);//������
    return 0;
}