#include <stdio.h>

/* ʹ��if���ģ���źŵƣ�ָ�ӳ�����ʻ.

Ϊ��ģ��ʮ��·�ڵ��źŵ�ָ��ϵͳ��Ҫʹ��if����ж��źŵƵ�״̬��
����źŵ�Ϊ��ɫ����˵������������ʻͨ����ͨ�������������Ϣ��ʾ��˵���������ж�״̬ 
*/
int main()
{
    int iSignal;/* ���������ʾ�źŵƵ�״̬ */
    printf("the red Light is 0,the green Light is 1\n");/* �����ʾ��Ϣ */
    scanf("%d", &iSignal);                              /* ����iSignal���� */
    if(iSignal == 1){
        printf("the Light is green,cars can run\n");/* �жϽ��Ϊ��ʱ��� */
    }
    return 0;
}
