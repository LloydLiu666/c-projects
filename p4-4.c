/*对代码清单4-6的程序进行修改，使其
•递减到1而非递减到0。
•当输入的值小于0时，不进行换行。*/
#include <stdio.h>

int main(void)
{
    int no;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    int i = no;
    while (i >= 1)
        printf("%d ", i--);

    if (no >= 0)
        printf("\n");
        
    return 0;
}