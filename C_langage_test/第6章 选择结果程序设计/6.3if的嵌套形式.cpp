/* 6.3if��Ƕ����ʽ 
��if����а���һ������if��䣬��Ϊif����Ƕ�ס�

if(���ʽ 1)
    if(���ʽ 2)    ���� 1
    else ���� 2
else
    if(���ʽ 3)    ����3
    else ���� 4

if����Ƕ����ʽ���ɶ��жϵ���������ϸ����Ȼ�������Ӧ�Ĳ���
if����жϱ��ʽ 1�������жϽ����ǲ��������������if����жϱ��ʽ 2Ϊ�棬��ôִ������ 1�е�����: 
�����Ϊ�棬��ôִ������ 2�е�����

eg1,���Ϊ���������������ѹ�֣����Ϊ�����գ���������ڼҡ������else����ʾ��Ϊ��Ϣ��ʱ����Ӧ������

if(iDay>Friday) //�ж�Ϊ��Ϣ�յ����
{
    if(iDay == Saturday)    //�ж�Ϊ����ʱ�Ĳ���
    {}
    else    //Ϊ����ʱ�Ĳ���
    {}
}
else    //��Ϊ��Ϣ�յ����
{   
    if(iDay == Monday)  //�ж�Ϊ��һʱ�����
    {}
    else
    {}
}
 */
/* eg6.8 ʹ��ifǶ�����ѡ���ճ̰��š�
ʹ��ifǶ����������������𲽽����жϣ�����ѡ��ִ����Ӧ�Ĳ�����
*/
#include<stdio.h>

int main(){
    int iDay=0;//���������ʾ���������
    /* �����������һ���е�ÿһ�� */
    int Monday=1,Tuesday=2,Wednesday=3,Thursday=4,Friday=5,Saturday=6,Sunday=7;
    printf("Enter a day of week to get course:\n");//��ʾ��Ϣ
    scanf("%d",&iDay);//iDay���������ֵ,int��

    if(iDay>Friday){//��Ϣ�յ����
        if(iDay==Saturday){//��Ϊ��������ʱ��
            printf("Go shopping with friends\n");
        }
        else//����Ϊ������
        {
            printf("Stay at home with families\n");
        }
    }
    else//�����յ����
    {
        if (iDay==Monday)//��iDay��ֵ����Monday
        {
            printf("have a meeting in the corporation\n");
        }
        else//Ϊ�������ڵ�ʱ��
        {
            printf("Working with partner\n");
        }
    }
    return 0;
}
/* �������:
1���������iDay������������û��������ֵ��������������Monday...��ʾÿ���е�ÿһ��
2��������6ʱ��if����жϱ��ʽiDay>Friday,������������ʾ�������ֵΪ��Ϣ�գ�����else��ʾ�����յĲ��֡�
����ж�Ϊ�棬������if����ж�iDay�Ƿ����Saturday������ֵ��������ڣ���ʾΪ��������ִ�к�������;
else����ʾ�����գ�ִ�к������䡣
 */