#include<stdio.h>
int main(){
    int a,b,x;
    a=1;
    b=2;
    x=0;
    if(!(--a))
        x--;  //--a�Ľ����0��!0�Ľ����1�����Ե�һ��if��������,x--;��ʱxΪ-1
    if(!b)x=7;//!b�Ľ����0,���Եڶ���if����������,ִ��else ++x���� xΪ0
        else ++x;
        printf("%d",x);
}