/* example 8.8 ������a��n���������෴˳����

    resolve:��a[0]��a[n-1]�Ի����ٽ�a[1]��a[n-2]�Ի�... ...ֱ����a[int(n-1)/2]��a[n-int((n-1)/2)-1]�Ի�.
        ѭ�����������,������""λ��ָʾ����"i��j,i�ĳ�ֵΪ0��j�ĳ�ֵΪn-1.��a[i]��a[j]����,Ȼ��ʹi��ֵ��1��j��ֵ��1���ٽ�a[i]��a[j]�Ի�,
        ֱ��i=(n-1)/2Ϊֹ��
 */
#include <stdio.h>
void inv(int x[ ],int n){//�β�x��������
    int temp,i,j,m=(n-1)/2;
    for(i=0;i<=m;i++){
        j=n-1-i;
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
    return;
}

int main(){
    void inv(int x[],int n);
    int i,a[10]={3,7,9,11,0,6,7,5,4,2};
    printf("The original array:\n");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
        printf("\n");
        inv(a,10);
        printf("The array has been inverted:\n");
        for(i=0;i<10;i++)
            printf("%d",a[i]);
        printf("\n");
        return 0;
}