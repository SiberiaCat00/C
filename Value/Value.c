#include <stdio.h>
#define NAME "SiberiaCat"//在内存中写入Siberiacat并标记地址为NAME


int main()
{
    int a = -1;
    printf("%d\n",a);
    //以十进制数输出
    printf("%hd\n",a);
    //以短整数输出,输出第八位结果
    //int a = -1;
    printf("%d\n",a);
    //输出-1
    printf("%o\n");
    //输出无符号八进制（补码）
    printf("%u\n");
    //输出无符号十进制
    printf("%x\n");
    //小写表示的十六进制无符号数
    printf("%X\n");
    //大写表示的十六进制无符号数
    printf("%e\n");
    //科学计数法

    //在c语言中，变量本来是没有类型的，是使用的时候解读的类型

    //Size of int: 4 bytes
    //Size of float: 4 bytes
    //Size of double: 8 bytes
    //Size of char: 1 byte
    char c = 'm';
    printf("%d",c);

    //常量：立即数和宏定义

}