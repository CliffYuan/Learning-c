//
// Created by xnd on 16-11-29.
//
#include <stdio.h>
#include <string.h>

/**
 * 计算数组长度
 *
 * (1)sizeof()占用内存空间大小
 * 1.把\0计算在内
 * 2.按数组长度计算
 *
 * (2)strlen()计算字符串的长度
 * 1.不把\0计算在内
 * 2.按实际占用数组长度计算
 */
void main(){
    char c[] = "this is a c pro";
    char d[] = {'o','k','d'};
    char a[8] = "abcdefghigklm";
    char b[6] = "b";
    char e[6] = "this56789";
    char f[6] = {'o', 'k','o', 'k','o', 'k','o', 'k','o', 'k','o', 'k','o', 'k'};


    printf("-----------------sizeof()------------------\n");
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(e));
    printf("%d\n",sizeof(f));

    printf("-----------------strlen()------------------\n");
    printf("%d\n",strlen(a));
    printf("%d\n",strlen(b));
    printf("%d\n",strlen(c));
    printf("%d\n",strlen(d));//todo 为啥是6?
    printf("%d\n",strlen(e));
    printf("%d\n",strlen(f));
}



