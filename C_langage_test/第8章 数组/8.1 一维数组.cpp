/* 8.1  һά����Ķ��������
һά����Ķ���

һά�������Դ洢һά���������ݵļ��ϡ���һ����ʽ:
    ����˵���� �����ʶ��[�������ʽ]
        ����˵������ʾ��ֵ������Ԫ�ص�����
        �����ʶ����ʾ�������ͱ��������ƣ����������������һ�¡�
        �������ʽ���������д�ŵ�����Ԫ�ظ����������鳤��. eg. iArrage[5],5��ʾ��������5��Ԫ�أ��±��0��ʼ����4����
    ����һ������:
        int iArrage[5];
    intΪ����Ԫ����������,��iArrageΪ����������������е�5Ϊ�����а�����Ԫ�ظ�����

        ע��:������iArrage[5]�У�ֻ��ʹ��iArrage[0],...����ʹ��iArrage[5],�������±�Խ��Ĵ���

һά���������   

��������Ԫ�صķ�ʽʹ�ø������е�Ԫ�ء�����Ԫ�ص�һ���ʾ��ʽ:
    �����ʾ��[�±�]
    eg.����һ���������iArrage�еĵ�3������:
    iArrage[2];
        ������±��0��ʼ�������±�Ϊ2��ʾΪ��3������Ԫ�ء�

        ע���±���������ͳ��������ͱ��ʽ��
*/

/* eg. 8.1ʹ�����鱣�����ݡ� ʹ�����鱣���û���������ݣ���������Ϻ�����������ݡ�*/
#include<stdio.h>

int main(){
    int iArrage[5],index,temp;//�������鼰����Ϊ��������
    printf("Please enter a Array:\n");

    for (index = 0; index<5; index++) // �����������Ԫ��
    { 
        scanf("%d",&iArrage[index]);
    }

    printf("Original Array is:\n");//��ʾ�����е�Ԫ��

    for(index=0;index<5;index++){
        printf("%d",iArrage[index]);
    }
    printf("\n");

    for(index=0;index<2;index++){//��������Ԫ�ص�ǰ��λ�û���
        temp=iArrage[index];//Ԫ��λ�û����Ĺ��̽����м����temp
        iArrage[index]=iArrage[4-index];
        iArrage[4-index]=temp;
    }
    printf("Now Array is:\n");

    for (index = 0; index < 5; index++)
    {
        printf("%d",iArrage[index]);
    }
    printf("\n");
    return 0;
}

