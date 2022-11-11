#include <stdio.h>
int main()
{
    printf ("請輸入1個數字:");
    int n;
    scanf("%d",&n);
    printf("用 8 除餘 %d\n",n%8);
    printf("用 9 除餘 %d\n",n%9);
    printf("用 15 除餘 %d\n",n%15);
}
