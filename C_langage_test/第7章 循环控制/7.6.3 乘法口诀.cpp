/* eg 7.9��ӡ�˷��ھ�
�ڳ˷��ھ��������к����ߵ���˵ó��˷������
*/
#include<stdio.h>
int main(){
    int iRow,iColum;//�������ͱ���
    for(iRow=1;iRow<=9;iRow++){
        printf("%d",iRow);

        for(iColum=1;iColum<=iRow;iColum++){//����iRow,iColum����iRowѭ������
            printf("%d*%d=%d", iRow, iColum, iRow * iColum);
        }
        printf("\n");
    }
    return 0;
}