/* 6.2.3 else if�����ʽ
����if��else�ؼ��ֵ���Ͽ���ʵ��else if��䣬���Ƕ�һϵ�л�����������м��飬��ʽΪ

if(���ʽ1) ���1
else if(���ʽ2) ���2
else if(���ʽ3) ���3
...
else if(���ʽ m) ���m
else ���n

eg1
if(Selection ==1)
    {...}
else if(iSelection ==2)
    {...}
else if(iSelection ==3)
    {...}
else
    {...}

�������:ʹ��if����жϱ���iSelection��ֵ�Ƿ�Ϊ1�����Ϊ1����ִ�к��������е����ݣ�Ȼ�����������else if�жϺ�else����ִ��
:���iSelection��ֵ��Ϊ1����ôelse if�ж�iSelection��ֵ�Ƿ�Ϊ2�����ֵΪ2��������Ϊ�棬ִ�к�������ŵ����죬ִ�������������
else if��else�Ĳ���:���iSelection��ֵҲ��Ϊ2����ô��������else if����ж�iSelection�Ƿ������ֵ3��������ڣ���ִ�к��������е����ݣ�
����ִ��else�����е����ݡ�Ҳ���ǣ���ǰ�����е��ж϶�������(Ϊ��ֵ)ʱ����ִ��else�����е����ݡ�

*/

/*ʹ��else if����д��Ļ�˵�����
��ȻҪ�Բ˵�����ѡ����ô����Ҫ��ʾ�˵������ø�ʽ����������˵������е���Ϣ���������
*/

#include<stdio.h>

int main(){
    int iSelection;/* �����������ʾ�˵���ѡ�� */
    printf("Menu\n");
    printf("1= load\n");
    printf("2=Save\n");
    printf("3=Open\n");
    printf("other = Quit\n");
    printf("enter Selection\n");/* ��ʾ��Ϣ */
    scanf("%d", &iSelection);/* �û�����ѡ�� */
    if(iSelection ==1)/* ѡ��Ϊ1 */
    {
        printf("Processing load\n");
    }
    else if(iSelection ==2)/* ѡ��Ϊ2 */
    {
        printf("Processing Save\n");
    }
    else if(iSelection ==3)/* ѡ��Ϊ3 */
    {
        printf("Processing Open\n");
    }
    else/* ����ֵΪ������ֵʱ */
    {
        printf("Processing Quit\n");
    }
    return 0;
}
/* ���������1)printf�������ѡ��Ĳ˵���ʾ���
            2)�������������Ϊ3������iSelection���������ֵ���֣�����ִ�к����ж� 
            3)�ж�iSelection��ʹ��if����ж�iSelection�Ƿ����1��ʹ��else if����ж�iSelection����2�͵���3�������
            ������iSelection����������ִ��else������䡣��ΪiSelection��ֵΪ3��
            ����iSelection ==3��ϵ���ʽΪ�棬ִ����Ӧelse if�������飬�����ʾ��Ϣ*/
