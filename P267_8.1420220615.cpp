/* example 8.14�������ַ���:�ַ���a������Ϊ""I am a teacher." �ַ���b������Ϊ""You are a student"
Ҫ����ַ���b���ӵ��ַ���a�ĺ���.�ַ���a������Ϊ""I am a teacher.You are a student."
resolves:
��������ָ������ֱ�ָ���ַ���a��b�����ַ�;
(2)ʹ��һָ�����ָ���ַ���a��ĩβ'\0'����
(3)�ӵ�һ��ָ�����ָ���Ԫ�ش���ʼ�����ַ���b�е��ַ�������Ƶ��ַ�����a�С���һ��������ʵ���ַ������ӵĹ���
 */
#include<stdio.h>
int main(){
    void link_string(char * arrl,char * arr2);/* �������� */
    char a[40]="I am a teacher.";//����aΪ�ַ�ָ�������ָ��һ���ַ���
    char b[]="You are a student.";//����bΪ�ַ����飬�ڷ�һ���ַ���
    char * pl=a, * p2=b;//�ַ�ָ�����pָ���ַ�����b����Ԫ��
    printf("string a:%s\nstring b:%s\n",p1,p2);//�������ǰ���ַ���
    link_string(p1,p2);//����link_string������ָ��������β�
    printf("Now,\nstring a:%s\nstring b:%s\n",a,b);//������Ӻ���ַ���
    return 0;
}
    void link_string(char * arrl,char * arr2){//�β�ʱ�ַ�ָ�����
        int i;
        for(i=0;*arrl!='\0';i++)
            arrl++;//��ָ�����ָ��'\0'
        for(;*arr2!='\0';arrl++,arr2++)//ֻҪarr2��û�����͸��Ƶ�arrl��
            *arrl=*arr2;
        *arrl='\0';//�ڸ�������һ��'\0'
    }