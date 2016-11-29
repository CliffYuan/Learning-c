//
// Created by xnd on 16-11-29.
//
#include <stdio.h>
#include <string.h>

/**
 * 计算数组长度
 *
 * (1)sizeof()把\0计算在内
 * (2)
 *
 */
void main(){
    char c[] = "this is a c pro";
    char d[] = {'o', 'k'};
    char a[8] = "abcdefghigklm";
    char e[6] = "this56789";
    char f[6] = {'o', 'k','o', 'k','o', 'k','o', 'k','o', 'k','o', 'k','o', 'k'};

    printf("-----------------sizeof()------------------\n");
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(e));
    printf("%d\n",sizeof(f));

    printf("-----------------strlen()------------------\n");
    printf("%d\n",strlen(c));
    printf("%d\n",strlen(d));
    printf("%d\n",strlen(a));
    printf("%d\n",strlen(e));
    printf("%d\n",strlen(f));
}



