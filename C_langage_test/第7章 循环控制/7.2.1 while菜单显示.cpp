/* eg 7.2 ʹ��whileѭ�����Ϊ�û��ṩ�˵���ʾ
��ʹ�ó���ʱ�����ݳ���Ĺ��ܻ������ѡ��,Ϊ��ʹ�û����Է���ع۲쵽�˵���ѡ�Ҫ����˵����������
�ڱ�ʵ���У�����whileѭ����佫�˵�����ѭ���������������ʹ�û���Ϊ�����֪��ÿһ��ѡ������Ӧ�Ĳ�����
 */
#include<stdio.h>

int main(){
    int iSelect=1;//�������,��ʾ�˵���ѡ��

    while (iSelect!=0)
    {
        /* ��ʾ�˵����� */
        printf("------Menu------\n");
        printf("----Sell----1\n");
        printf("----Buy-----2\n");
        printf("-ShowProduct-3\n");
        printf("---0-Out-----0\n");

        scanf("%d",&iSelect);//����˵���ѡ��
        switch (iSelect)
        {
        case 1://ѡ���һ��˵������
            printf("You are buying something into store\n");
            break;

        case 2: //ѡ��ڶ���˵������
            printf("You are selling to consumer\n");
            break;

        case 3: //ѡ�������˵������
            printf("Checking the store\n");
            break;

        default:
            break;
        }
    }
    
}