//
// Created by Miaozi on 2022/2/26.
//

#include <stdio.h>

/*int main() {
    printf("Hello, World!\n");
    return 0;
}*/

/*
int main() {
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
}
*/
/*
int main()
{
    //创建一个变量
    //类型 变量的名字 =0
    //类型 变量的名；//不推荐
    int age = 20;
    double weight = 75.2;
    age=age+1;
    weight =weight - 10;

    printf("%d\n",age);
    printf("%lf\n",weight);

    return 0;
}*/

//全局标量-{}外部定义的

/*
int main()
{
    //局部变量 {}内部定义的
    //当局部变量和全局变量名字冲突的情况下，局部优先
    //不建议把全局变量和局部变量的名字写成一样的
    int a = 10;

    printf("%d\n",a);

    return 0;
}
*/

//写一个代码求两个整数的和
//scanf函数是输入函数
/*
int main()
{
    int a = 0;
    int b = 0;
    int sum =0;
    scanf("%d %d",&a,&b);
    sum = a +b;
    printf("sum = %d\n",sum);
    return  0;
}*/

//作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域；整个工程

/*
int g_val =2022;//全局变量

int main()
{
    printf("第一次打印%d\n",g_val);
    {
        printf("第二次打印%d\n",g_val);
        int a = 10;
        printf("第一次打印a=%d\n", a);//变量在哪里使用哪里就是作用域
    }
    printf("第二次打印a=%d\n",a);

    return 0;
}*/

//int g_val=2023;

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段

//局部变量的生命周期，进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期

/*
int main()
{
    {
        int a = 10;
        printf("%d",a);//局部变量
    }

    return 0;
}*/

//字面常量
/*int main()
{
    //字面常量
    //3.14
    //‘a'

    //const修饰的常变量
*//*    int num=10;
    num=20;
    printf("num = %d\n",num);//输出20

    const int num2 = 22;//num2就是常变量-具有常属性（不能被改变的属性）

    printf("num2=%d",num2);*//*

//    int arr[10]={0};//十个元素

    *//*int n=10;
    int arr2[n]={0};
    //n是变量的这里是不行的*//*

    *//*const int n=10;
    int arr2[n]={0};

    return 0;*//*
}*/
//#define定义的标识符常量
//在括号里面定义也是可以的
#define MAX 10

//性别
//enum枚举关键字
/*enum sex //sex枚举类型里面放的三个值是枚举常量
{
    //这种枚举类型的变量的未来可能取值
    //枚举常量
    MALE=3,//赋初值
    FMALE,
    SECRET
};
int main()
{
    //枚举常量
    //可以一一列举的常量

    enum sex s = MALE;//枚举变量s的取值

    printf("%d\n",MALE);
    printf("%d\n",FMALE);
    printf("%d\n",SECRET);

    return 0;
}*/
//枚举常量是常量默认值是从0开始的
