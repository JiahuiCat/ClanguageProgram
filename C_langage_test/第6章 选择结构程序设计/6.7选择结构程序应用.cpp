/* eg 6.14ʹ��switch���������乫˾�ļƷ�
ĳ���乫˾���շѰ����û����ͻ����·�̽��мƷѡ�·��(s)ԽԶ��ÿ�����˷�Խ�ͣ��շѱ�׼
·�� s<250        �˷� û���ۿ�
    250<=s<500   �˷�  2%�ۿ�
    500<=s<1000  �˷�  5%�ۿ�
    1000<=s<2000 �˷�  8%�ۿ�
    2000<=s<3000 �˷�  10%�ۿ�
    3000<=s      �˷�  15%�ۿ�
 */
#include<stdio.h>
int main(){
    int iDiscount;//��ʾ�ۿ�
    int iSpace;//��ʾ·��
    int iSwitch;//��ʾ�ۿ۵ļ������
    float fPrice, fWeight, fAllPrice; //����float���ͱ�����float ����С�������Чλ��λ���� Double �� �� 15 λ��
    printf("Enter the price ,weight and space\n");
    scanf("%f%f%d",&fPrice,&fWeight,&iSpace);//������������
    if(iSpace>3000){
        iSwitch=12;//�ۿ۵ļ������Ϊ12
    }
    else
    {
        iSwitch=iSpace/250;//�����ۿ۵ļ������
    }
    
    switch (iSwitch)//ʹ�ö�·����ģʽswitch���м���
    {
    case 0:
        iDiscount=0;
        break;
    
    case 1:
        iDiscount=2;
        break;
    
    case 2:
    case 3:
        iDiscount=5;
        break;
    
    case 5:
    case 6:
    case 7:
        iDiscount=8;
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        iDiscount=10;
        break;
    case 12:
        iDiscount=15;
        break;
    
    default:
        break;
    }

    fAllPrice=fPrice*fWeight*iSpace*(1-iDiscount/100.0);//�����ܼ۸�
    printf("AllPrice is :%.4f\n",fAllPrice);//������
    return 0;
}
/* �������:����ı��� fPrice,fWeight��fAllPrice�ֱ��ʾ���ۣ����������յõ����ܼ۸�
ͨ����·��ִ�г����õ�������Ȼ��ʹ��switch�����м���
������Ҫע����ǣ��ڼ���iSwitch=iSpace/250ʱ������iSwitch���������Ϊ���ͣ�����iSwitch��ֵΪ�����õ����������֡� */