/* 6.6 if...else����switch�������� 
1.�﷨�ıȽ�
if��Ҫ���else�ؼ��ֽ���ʹ�ã�switch��Ҫ���case�ؼ��ֽ���ʹ�ã�if������ȶ����������жϣ���switch����Ǻ�����жϡ�

2.Ч�ʵıȽ�
if ... else�ṹ�������ļ��飬�ж��ٶȱȽϿ죬���������������������𽥱��������е�Ĭ�����������
ʹ��if else�ṹ�����жϱ��ʽ��ͬ����������������Ӽ����ٶ��𽥱��������⣬Ҳ�����׽��к�����������䡣

switch�ṹ�У�����defaultĬ������£�������ÿһ��case�ļ����ٶȶ�����ͬ�ġ�defaultĬ�����������������졣

����:����Ҫ�ж����������ʱ��ʹ��if...else�ṹ��ʹ��switch�ṹ�����ٶȿ졣
eg,��֧��3����4��һ�£���if...else�ṹ�ȽϺã�����Ӧѡ��switch�ṹ*/

/* eg 6.13 if����switch�����ۺ�Ӧ��
��Ƴ���:����һ���е��·ݣ��õ���������������������û����ж��������������������ѡ��ʹ��if����switch��� */
#include<stdio.h>
int main(){
    int iMonth=0,iDay=0;//����iMonth��iDay����
    printf("Enter the month you want to know the days\n");//��ʾ��Ϣ
    scanf("%d",&iMonth);//��������
    switch (iMonth)//�������
    {
        //��·����ģʽswitch�����м���
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        iDay=31;//iDay��ֵΪ31
        break;//����switch�ṹ
    case 4:
    case 6:
    case 9:
    case 11:
        iDay=30;//iDay��ֵΪ30
        break;  //����switch�ṹ
    case 2:
        iDay=28;//iDay��ֵΪ28
        break;  //����switch�ṹ
    default://Ĭ�����
        iDay=-1;//��ֵΪ-1
        break;
    }
    if(iDay ==-1){//ʹ��if����ж�iDay��ֵ
        printf("There is a error with you enter\n");
    }
    else//Ĭ�����
    {
        printf("2022.%d has %d days\n",iMonth,iDay);
    }
    return 0;
}
/* �������:�ж�һ����12���·�������������������Ҫ��12�ֲ�ͬ��������м��顣
���ڼ��������Ƚ϶�,����ʹ��switch�ṹ�ж��·ݱȽϺ��ʣ����ҿ���ʹ�ö�·����ģʽ���������ࡣ
����case��������ж��·�iMonth�����������ΪiDay����Ӧ��ֵ��defaultĬ�ϴ���Ϊ������·ݲ����ϼ�������ʱ,iDay��ֵΪ-1��
*/