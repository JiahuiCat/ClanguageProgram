/* example7.8.   �������࣬ѧ������ͬ����дһ�������������ֱ�������ƽ���ɼ���
Resolve    :��ͬһ��������ͬ�����İ༶ƽ���ɼ����涨�ڶ����β�ʱ��ָ������Ĵ�С�������Բ�ͬ�����İ༶�������õ�
            �������������������βεĹ涨�����������ݵ���������Ԫ�صĵ�ַ������������Ԫ�ء�
            ������ͬһ����������������ͬ�İ��ƽ���ɼ����ڶ���average����ʱ������һ������n������ָ����ǰ�༶��������
 */
#include<stdio.h>
float average(float array[],int n){//û��ָ���β�����Ĵ�С���β�n�������ձ�������
    int i;
    float aver,sum=array[0];//sum�ĳ�ֵ�ǵ�һ��ѧ���ĳɼ�
    for(i=1;i<n;i++){
        sum=sum+array[i];//��array[1]��array[n]��ӵ�sum��
        aver=sum/n;//��ƽ���ɼ�
        return(aver);//��ƽ���ɼ���Ϊ����ֵ����������
    }
}

int main(){
    float average(float array[],int n);//��average����������
    float score_1[5]={97.5,65.5,92,94,70.5};//��һ����5��ѧ��;
    float score_2[10]={89,90,75.5,68.5,85,34,56,70,45,78};//�Եڶ�����10ѧ��
    printf("The average of classA is %6.2f\n",average(score_1,5));//�����һ��ƽ���ɼ�
    printf("The average of classB is %6.2f\n",average(score_2,10));//����ڶ���ƽ���ɼ�
    return 0;
}