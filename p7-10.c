//创建一个程序，横向显示代码清单7-11中以0.01为单位将float型变量由0.0递增为1.0的过程，以及代码清单7-12中将int型变量由0递增到100,并求其除以100.0后所得值的过程。

#include <stdio.h>

int c711(void)
{
    float x;

    printf("x = ");

    for (x = 0.0; x <= 1.0; x += 0.01)
        printf("%f  ", x);
    
    return 0;
}

int c712(void)
{
    int i;
    float x;

    printf("x = ");

    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("%f  ", x);
    }

    return 0;
}

int main(void){
    printf("7-11: ");
    c711();
    printf("\n7-12: ");
    c712();
    printf("\n");
    return 0;
}