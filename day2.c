//
// Created by Miaozi on 2022/2/27.
//

//�ַ�������һ���ַ� - ��˫������������һ���ַ�

#include <stdio.h>
#include <string.h>

/*

int main()
{
//    "hello\n";
    //�ַ��������ı�־��һ��\0�Ĵ����ַ�
    //�ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������
    //�ַ�����-������һ����ͬ���͵�Ԫ��

    //char arr[]="hello";

   */
/* char arr1[] = "abc";
    //abc\0
    char arr2[] = {'a','b','c','\0'};
    //abc*//*



*/
/*
    //��ӡ�ַ���
    printf("%s\n",arr1);
    printf("%s\n",arr2);
*//*


//    ��һ���ַ����ĳ���
    */
/*int len = strlen("abc");//string length
    //strlen Ҫ����#include <string.h>
    printf("%d\n",len);*//*


*/
/*    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));*//*

//�ַ����ڽ�β��λ��������һ��\0���ַ�
//\0���ַ����Ľ����ı�־


    //ת���ַ� - ת������ԭ������˼
    //��������Ļ��ӡ��ַ

//    printf("C:\test\test.c");
//    printf("ab\ncd");
    //C�����е�ת���ַ�
    //������--] ������ĸ��
    //printf�ڴ�ӡ���ݵ�ʱ��Ҫָ����ӡ�ĸ�ʽ
    //%s���ַ��� %d������ %c���ַ�
   */
/* printf("%c\n",'\'');
    printf("%s\n","abc");
    printf("%s\n","a");
    printf("%s\n","\"");
    printf("%s\n","'");
    printf("C:\\test\\test.c\n");
    printf("\a\a\a\n");

    printf("%c\n",'\130');//8����130��ʮ���Ƶ�88
    //X��ASCII��ֵ��88
    printf("%c\n",'\101');
    //ASCII:�������ó����ַ��涨��ֵ
    //��A-65ASCII���ÿһ���ַ����涨��һ��ֵ

    printf("%c\n",'\x30');//48->0*//*



    */
/*
    \' \" ��˫����
    \\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
    \a �����ַ�������(���Ի���һ��)
    \b �˸��
    \f ��ֽ��
    \n ����
    \r �س�
    \t ˮƽ�Ʊ�����˽⣩
    \v ��ֱ�Ʊ�����˽⣩
    \ddd ddd��ʾ1~3���˽��Ƶ����� �磺\130->X
    \xdd dd��ʾ2��ʮ���������� ��\x30 0*//*


    printf("%d\n", strlen("C:\test\328\test.c"));
    //��ʮ����Ϊ\328�ǰ˽���\32 8���Ʋ�����8��


    return 0;
}*/

    //ѡ�����
/*
int main()
{
    int input = 0;
    printf("�����ͷ��\n");
    printf("����Ҫ��������(1/0)?>:");
    scanf("%d",&input);

    if(input == 1)
        printf("�����ƽ\n");
    else
        printf("������\n");
    return 0;
}*/

//ѭ�����
/*
int main()
{
    int line = 0;
    //ѭ��
    while(line<30000)
    {
        printf("д���������:%d\n",line);
        line++;
    }
    if(line == 30000)
    {
        printf("�õ��õ�offer\n");
    }

}*/

/*
//����
int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d%d",&num1,&num2);
//    int sum = num1 + num2;
//    printf("%d\n",sum);
    //�ú����ķ�ʽ���
    int sum = Add(num1,num2);
    printf("%d\n",sum);

}*/

//����
/*
int main()
{
    //���� - һ����ͬ���͵�Ԫ�صļ���
    //10������1-10������
    //���������±������ʵ�

    */
/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char ch[5] = {'a','b','c'};
    //����ȫ��ʼ��ʣ���ȫ��Ϊ0

    int i =0;
    while(i<10)
    {
        printf("%d ",arr[i]);
        i++;
    }
*//*


    int a = 9/2;
    float b = 9/2;
    float c = 9/2.0;
    int d = 9%2;//ȡģ���ࣩ
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
    printf("%d\n",d);

    return 0;

}*/

/*
int main()
{
    int a = 2;
    int b = a<<1;//a - 2 �Ķ�����λ�����ƶ�һλ

    printf("%d\n",b);
    return 0;
}*/

/*
int main()
{
    int a =2;
    a=a+5;
    a+=5;
    a= a-3;
    a%=3

}*/

/*
int main()
{
    */
/*
//0��ʾ�� ��0��ʾ��
    int a = 0;
    printf("%d\n",!a);

    if(a)
    {
        //���aΪ�棬��������
    }
    if(!a)
    {
        //���aΪ�٣���������
    }
    a = -5;*//*


    //sizeof��һ��������
    //���ͻ��߱����Ĵ�С��
    */
/*int a = 10;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof a);
    return 0;*//*

    //10
    int arr[10] = {0};
    printf("%d\n",sizeof(arr));
    //�������������ܴ�С��λ���ֽ�
    printf("%d\n",sizeof(arr[0]));
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",sz);
    return 0;
}*/

/*int main()
{
    int a = 0;
    printf("%d\n",~a);
    //~��λȡ��
    return 0;
}*/
//���ն�����λȡ�� �����ж�����λ�е����֣�1���0��0���1
//֤��a-0 ������
//�������ڴ��д洢���ǲ���
//һ�������Ķ����Ʊ�ʾ������
//ԭ�� ���� ����

//�����Ǹ����ļ���
//-1��10000000000000000000000000000001-ԭ��
//����λ���䰴λȡ�� 11111111111111111111111111111110 - ����
//�������һλ1�䲹�� 11111111111111111111111111111111 - ����
//����������-ԭ�뷴�벹����ͬ

/*
int main()
{
    int a =10;
    //int b =++a;
    //ǰ��++ ��++����ʹ��

    int b=a++;
    //����++����ʹ�ã���++

    printf("%d\n",b);
    printf("%d\n",a);

    return 0;
}*/

/*
int main()
{
//    ǿ������ת��
    int a =(int)3.14;

    printf("%d\n",a);
    return 0;
}*/

//��������������Ŀ��������
//���ʽ1���������ʽ2���㣻�������ʽ�Ľṹʽ���ʽ2�Ľ��
//���ʽ1�����������ʽ3���㣻�������ʽ�Ľṹʽ���ʽ3�Ľ��
/*
int main()
{
    int a = 0;
    int b = 3;
    int max = 0;

    max=a>b?a:b;
    printf("%d",max);


    return 0;
}*/

//���ű��ʽ�ǣ����Ÿ�����һ�α��ʽ
/*
int main()
{
//    (2,4+5,6)
    int a = 0;
    int b = 3;
    int c = 5;
    int d = (a = b + 2,c =a-4 , b = c +2);
    //a = 5 c = 1 b = 3
    //���ű��ʽ�Ǵ����������μ����
    //�������ʽ�Ľ�������һ�����ʽ�Ľ��
    printf("%d",d);
    return 0;
}*/

//�±����ò�����
/*
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[5]);
    return 0;
}*/

//�������ò�����
/*
int main()
{
    //���ú�����ʱ�򣬺���������ģ������Ǻ������ò�����
    printf("heihei\n");
    printf("%d\n",101);

    return 0;
}*/

//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ������ؼ���
//2.�����������ǹؼ���
/*
int main()
{
    {
        int a = 10;//�Զ��������Զ����ٵģ��Զ�����
        //autoʡ�Ե���

    }
    return 0;
}*/

/*
int main()
{
    register int num = 100;//����num��ֵ��ŵ��Ĵ�����
    //����Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
}*/
