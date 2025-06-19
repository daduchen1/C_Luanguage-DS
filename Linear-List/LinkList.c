#include <stdio.h>
//任务1：创建空顺序表​​
//​​操作目标​​：实现一个函数创建空顺序表
//初始化容量（如10）
//动态分配数组内存
//设置初始size=0
#define Maxsize 50
typedef struct{
    int data[Maxsize];
    int len;
}SqList;
void init(){
    
}