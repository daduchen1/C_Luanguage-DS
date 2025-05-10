#include <stdio.h>
#include <stdbool.h>
#define Maxsize 50

//定义顺序表
typedef struct{
    int data[Maxsize];      //int类型的数组表示顺序表，表的最大大小是Maxsize
    int length;             //表当前的长度
}Sqlist;
//定义一些函数来实现顺序表的初始化，增删改查

//初始化顺序表

bool Initsqlist(Sqlist *L){
    //把表中元素都初始化成0
    int i=0;
    scanf("%d",&L->length);     //输入表现在需要的长度
    if(L->length<0||L->length>Maxsize){
        return false;
    }    
    for(i;i<L->length;i++){
        L->data[i]=0;
    }
}

int main(){
    Sqlist list;
    Initsqlist(&list);
    printf("%d",list.data[1]);
    return 0;
}