//
// Created by Miaozi on 2022/2/28.
//

#include <stdio.h>

/*
typedef unsigned int uint_2;
//张三-小三
int main()
{
    unsigned int num1 = 0;
    uint_2 num2 = 0;
    return 0;
}*/

//static - 静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数

/*
void test()
{
    static int a = 1;
    a++;
    printf("%d",a);//a是局部变量
}//static修饰之后a没有销毁生命周期变长
int main()
{
    int i = 0;
    while(i<10)
    {
        test();
        i++;
    }
    return 0;

}*/

//声明
/*
extern int g_val;

int main()
{
    printf("%d",g_val);

    return 0;
}*/


//声明函数
/*
extern int Add(int x, int y);

int main()
{
    int a = 10;
    int b = 20;
    int sum = Add(a,b);
    printf("%d",sum);
    return 0;
}*/

//define是一个预处理指令
//define定义符号
//#define MAX 1000
//2.define 定义宏
/*
#define ADD(X,Y) ((X)+(Y))
int main()
{
    printf("%d\n", 4*ADD(2,3));
    return 0;
}*/


