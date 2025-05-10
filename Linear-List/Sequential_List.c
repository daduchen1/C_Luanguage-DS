#include <stdio.h>
#define Maxsize 50

//定义顺序表
typedef struct{
    int data[Maxsize];      //int类型的数组表示顺序表，表的最大大小是Maxsize
    int length;             //表当前的长度
}Sqlist;
//定义一些函数来实现顺序表的初始化，增删改查

//初始化顺序表

