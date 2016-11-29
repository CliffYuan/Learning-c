#include <stdio.h>

/**
*
* 结论：
* (1)数组名等于指针名
* (2)不管行参是数组还是指针，都可以改变原始数组的值
* (3)实参既可以是数组也可以是数组的地址
*
**/

/**
 * 显示声明函数
 */
void printf_arrays(int *a);
void array(int a[]);
void arraypoint(int *a);


void main(){
    printf("数组和指针参数：\n");

    int a[] ={1,2,3,4,5,6};
    printf("-------------------------输出原始数组--------------------------------\n");
    printf_arrays(a);
    

    a[1]=2;
    array(a);
    printf("-------------------------参数为数组-接收为数组-------------------------\n");
    printf_arrays(a);

    a[1]=2;
    printf("-------------------------参数为数组地址-接收为数组----------------------\n");
    array(&a);
    printf_arrays(a);
    
    a[1]=2;
    printf("-------------------------参数为数组-接收为指针-------------------------\n");
    arraypoint(a);
    printf_arrays(a);
    
    a[1]=2;
    printf("-------------------------参数为数组地址-接收为指针----------------------\n");
    arraypoint(&a);
    printf_arrays(a);

}

/**
* 接收为数组
**/
void array(int a[]){
    a[1]=100;
    // *(a+1)=100; 与上面是等价的
}

/**
*接收为指针
**/
void arraypoint(int *a){
    *(a+1)=100;
    // a[1]=100;   与上面是等价的
}

/**
 * 输出数组内容
 * @param a
 */
void printf_arrays(int *a){
    for(int i=0;i<5;i++){
        printf("a[%d]=%d \n",i,*(a+i));
    }
}