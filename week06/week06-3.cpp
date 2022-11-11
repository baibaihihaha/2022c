#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a,b,c;///大中小
    scanf("%d%d",&a,&b);
    while(1){///一直做
        c=a%b;///小
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;///老二變老大
        b=c;///老三變老二
    }
    printf("中的是:%d",b);
}
