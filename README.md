# 2022c
09360104
#week01
中秋節放假
#week02

#week03

#week04

#week05

#week06
## step01-0 
考試: 九九乘法表(小心格式)
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            printf("%d*%d=%2d ",j,i,i*j);
        }
        printf("\n");
    }
}
```
## step01-1
2層迴圈-更多種畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=i*2-1;///有幾個星星
        printf("鷹架:%d樓 %d星\n",i,star);
}
```
## step01-2
2層迴圈-更多種畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i;///有幾個空格
        int star=i*2-1;///有幾個星星
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step01-3
最大公因數-暴力迴圈法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0)ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step01-4
最大公因數-輾轉相除法
```cpp
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
```
## step01-5
解釋while迴圈
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999)printf("-999成立\n");
    if(-3)printf("-3成立\n");
    if(-2)printf("-2成立\n");
    if(-1)printf("-1成立\n");
    if(0)printf("0不成立,所以什麼都沒印\n");
    if(1)printf("1成立\n");
    if(2)printf("2成立\n");
    if(3)printf("3成立\n");
    if(4)printf("4成立\n");
    if(999)printf("999成立\n");
    if("a==0")printf("不管什麼東西,幾乎都成立\n");
}
```
#week07
## step01-0 
考試: 畫星星(金字塔) (考前有無練習)
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	int space = n-i;
	int star = i*2-1;
	for(int k=0;k<space;k++)printf(" ");
	for(int k=0;k<star;k++)printf("*");
	printf("\n");
	}
}
```

## step01-1 
主題: 各種型別 long long int,
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);///出事了
    long long int a=1234567812345678;
    printf("%lld\n",a);///不是數字11是英文小寫ll
}
```

## step01-2 
主題: 複習最大公因數
```cpp
```

## step01-3 
主題: 十進位轉2進位(剝皮法)
```cpp
```

## step01-4 
主題: 用 GitHub 做出自己的網站
```cpp
```
