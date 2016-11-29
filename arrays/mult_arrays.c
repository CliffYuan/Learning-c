#include <stdio.h>

void main(){

    int mult_int_arrays[2][3]={{1,2,3},{4,5,6}};

    mult_int_arrays[0][2]=30;

    mult_int_arrays[1]={40,50,60};

    printf("mult_int_arrays[0][2]=%d",mult_int_arrays[0][2]);

    printf("mult_int_arrays[1]=%d",mult_int_arrays[1]);

}