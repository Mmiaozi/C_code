//
// Created by Miaozi on 2022/2/27.
//

//字符串就是一串字符 - 用双引号括起来的一串字符

#include <stdio.h>
#include <string.h>

/*

int main()
{
//    "hello\n";
    //字符串结束的标志是一个\0的穿衣字符
    //在计算字符串长度的时候\0是结束标志，不算作字符串内容
    //字符数组-数组是一组形同类型的元素

    //char arr[]="hello";

   */
/* char arr1[] = "abc";
    //abc\0
    char arr2[] = {'a','b','c','\0'};
    //abc*//*



*/
/*
    //打印字符串
    printf("%s\n",arr1);
    printf("%s\n",arr2);
*//*


//    求一下字符串的长度
    */
/*int len = strlen("abc");//string length
    //strlen 要引用#include <string.h>
    printf("%d\n",len);*//*


*/
/*    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));*//*

//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束的标志


    //转义字符 - 转变了他原来的意思
    //加入在屏幕打印地址

//    printf("C:\test\test.c");
//    printf("ab\ncd");
    //C语言中的转义字符
    //？？）--] —三字母词
    //printf在打印数据的时候要指定打印的格式
    //%s是字符串 %d是整型 %c是字符
   */
/* printf("%c\n",'\'');
    printf("%s\n","abc");
    printf("%s\n","a");
    printf("%s\n","\"");
    printf("%s\n","'");
    printf("C:\\test\\test.c\n");
    printf("\a\a\a\n");

    printf("%c\n",'\130');//8进制130是十进制的88
    //X的ASCII码值是88
    printf("%c\n",'\101');
    //ASCII:键盘上敲出的字符规定的值
    //如A-65ASCII码表每一个字符都规定了一个值

    printf("%c\n",'\x30');//48->0*//*



    */
/*
    \' \" 单双引号
    \\ 用于表示一个反斜杠，防止它被解释为一个转义序列符
    \a 警告字符，蜂鸣(电脑会响一下)
    \b 退格符
    \f 进纸符
    \n 换行
    \r 回车
    \t 水平制表符（了解）
    \v 垂直制表符（了解）
    \ddd ddd表示1~3个八进制的数字 如：\130->X
    \xdd dd表示2个十六进制数字 如\x30 0*//*


    printf("%d\n", strlen("C:\test\328\test.c"));
    //长十四因为\328是八进制\32 8进制不包括8的


    return 0;
}*/

    //选择语句
/*
int main()
{
    int input = 0;
    printf("加入九头蛇\n");
    printf("必须要打到美队吗(1/0)?>:");
    scanf("%d",&input);

    if(input == 1)
        printf("世界和平\n");
    else
        printf("卖土豆\n");
    return 0;
}*/

//循环语句
/*
int main()
{
    int line = 0;
    //循环
    while(line<30000)
    {
        printf("写代码的条数:%d\n",line);
        line++;
    }
    if(line == 30000)
    {
        printf("得到好的offer\n");
    }

}*/

/*
//函数
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
    //用函数的方式解决
    int sum = Add(num1,num2);
    printf("%d\n",sum);

}*/

//数组
/*
int main()
{
    //数组 - 一组相同类型的元素的集合
    //10个整形1-10存起来
    //数组是用下标来访问的

    */
/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char ch[5] = {'a','b','c'};
    //不完全初始化剩余的全部为0

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
    int d = 9%2;//取模（余）
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
    int b = a<<1;//a - 2 的二进制位向左移动一位

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
//0表示假 非0表示真
    int a = 0;
    printf("%d\n",!a);

    if(a)
    {
        //如果a为真，做的事情
    }
    if(!a)
    {
        //如果a为假，做的事情
    }
    a = -5;*//*


    //sizeof是一个操作符
    //类型或者变量的大小的
    */
/*int a = 10;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof a);
    return 0;*//*

    //10
    int arr[10] = {0};
    printf("%d\n",sizeof(arr));
    //计算的是数组的总大小单位是字节
    printf("%d\n",sizeof(arr[0]));
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",sz);
    return 0;
}*/

/*int main()
{
    int a = 0;
    printf("%d\n",~a);
    //~按位取反
    return 0;
}*/
//按照二进制位取反 把所有二进制位中的数字，1变成0，0变成1
//证书a-0 二进制
//整数在内存中存储的是补码
//一个整数的二进制表示有三种
//原码 反码 补码

//以下是负数的计算
//-1：10000000000000000000000000000001-原码
//符号位不变按位取反 11111111111111111111111111111110 - 反码
//反码最后一位1变补码 11111111111111111111111111111111 - 补码
//对于正整数-原码反码补码相同

/*
int main()
{
    int a =10;
    //int b =++a;
    //前置++ 先++，后使用

    int b=a++;
    //后置++，先使用，再++

    printf("%d\n",b);
    printf("%d\n",a);

    return 0;
}*/

/*
int main()
{
//    强制类型转换
    int a =(int)3.14;

    printf("%d\n",a);
    return 0;
}*/

//条件操作符（三目操作符）
//表达式1成立；表达式2计算；整个表达式的结构式表达式2的结果
//表达式1不成立；表达式3计算；整个表达式的结构式表达式3的结果
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

//逗号表达式是：逗号隔开的一段表达式
/*
int main()
{
//    (2,4+5,6)
    int a = 0;
    int b = 3;
    int c = 5;
    int d = (a = b + 2,c =a-4 , b = c +2);
    //a = 5 c = 1 b = 3
    //逗号表达式是从左向右依次计算的
    //整个表达式的结果是最后一个表达式的结果
    printf("%d",d);
    return 0;
}*/

//下标引用操作符
/*
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[5]);
    return 0;
}*/

//函数调用操作符
/*
int main()
{
    //调用函数的时候，函数名后面的（）就是函数调用操作符
    printf("heihei\n");
    printf("%d\n",101);

    return 0;
}*/

//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字
/*
int main()
{
    {
        int a = 10;//自动创建，自动销毁的，自动变量
        //auto省略掉了

    }
    return 0;
}*/

/*
int main()
{
    register int num = 100;//建议num的值存放到寄存器中
    //大量频繁被使用的数据，想放在寄存器中，提升效率
}*/
