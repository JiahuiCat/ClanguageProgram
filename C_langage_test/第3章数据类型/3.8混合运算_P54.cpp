#include<stdio.h>
/* ��ͬ����֮����Խ������㣬��ͬ���͵�����Ҫ��ת����ͬһ���ͣ�Ȼ���ٽ������㡣 */
/* eg13.�������
�ڱ�ʵ���У���int�ͱ�����char������float�ͱ���������ӣ������������double���͵�result�����У����ʹ��printf������������� */

 int main(){
    int int1=1;/* �������ͱ��� */
    char cChar='A';/* ASCII��Ϊ65 */
    float fFloat=2.2f;/* ���嵥�������ͱ��� */
    double result=int1+cChar+fFloat;/* ��ӵõ��Ľ�� */
    printf("%f\n",result);/* ��ʾ����ֵ */
    return 0;
 }