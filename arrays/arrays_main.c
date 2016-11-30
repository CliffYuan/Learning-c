#include<stdio.h>

/**
 * 默认第一个参数为程序名
 *
 * @param argc
 * @param argv
 * @return
 */
int main(int argc,char *argv[]){
    //数组的形式访问
    int i;
    for(i=0;i<argc;i++){
        printf("%d=%s \n",i,argv[i]);
    }


    //指针的形式访问
    int j;
    for(j=0;j<argc;j++){
        printf("%d=%s \n",j,*argv++);//*和++平级，从右到左
    }

    //再次访问已经越界了
    int k;
    for(k=0;k<argc;k++){
        printf("%d=%s \n",k,*argv);
        printf("%d=%s \n",k,*++argv);
    }
    return 0;
}