#include <stdio.h>

/**
 * 数组和字符串
 *
 * (1)字符串赋值给数组，只能在数组初始化的进行，初始化后在赋值error.
 * (2)字符串赋值给数组，超过数组大小，则截取
 * (3)
 *
 *
 */
void main() {
    char c[] = "this is a c pro";
    char d[] = {'o', 'k'};

    char a[8] = "abcdefghigklm";

    //超过数组长度的字符串被截断
    char e[6] = "this56789";

    char f[6] = {'o', 'k','o', 'k','o', 'k','o', 'k','o', 'k','o', 'k','o', 'k'};

    printf("%s,size:%d\n", c, );
    printf("%s,size:%d\n", d, d.length);
    printf("%s,size:%d\n", a, a.length);
    printf("%s,size:%d\n", e, e.length);
    printf("%s,size:%d\n", f, f.length);

}



