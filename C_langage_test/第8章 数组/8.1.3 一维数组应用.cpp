/* 8.1.3 һά�����Ӧ��

eg. 8.5ʹ�����鱣��ѧ������
Ҫʹ�����鱣��ѧ������������ô�����е�ÿһ��Ԫ�ض�Ӧ���ǿ��Ա����ַ��������ͣ�����ʹ���ַ�ָ�����͡�
 */
#include<stdio.h>

int main(){
    char*iArrayName[5];//�ַ�ָ������
    int index;//ѭ�����Ʊ���
    iArrayName[0]="One";//Ϊ����Ԫ�ظ�ֵ
    iArrayName[1]="Two";
    iArrayName[2]="Three";
    iArrayName[3]="Four";
    iArrayName[4]="Five";
    for (index=0;index<5;index++)
    {
        printf("%s\n",iArrayName[index]);
    }
    return 0;
}
/*�������:char*iArrayName[5]����һ������5���ַ�ָ��Ԫ�ص����飬
Ȼ������ÿ��Ԫ�ر����ַ�����ʹ��forѭ�����������鱣����ַ������ݽ������ */