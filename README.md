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
## step02-0 
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
## step02-1 
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
## step02-2 
主題: 複習最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b; ///很長很長的整數a,b
    scanf("%lld%lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){ ///好慢喔!!!
        if(a%i==0&&b%i==0)ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
## step02-3 
主題: 複習最大公因數(輾轉相除法)
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);
    while(1){
        c=a%b;
        printf("%lld%lld%lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
## step02-4 
主題: 十進位轉2進位(剝皮法)
```cpp
#include <stdio.h>
int main()
{
    int n=1234566789;
    while(n>0){
        printf("個位數是:%d\n", n%10);
        n=n/10;
    }
}
```

#week08
## step03-0
考試: 最大公因數-輾轉相除
```cpp
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(1){
		c=a%b;
		if(c==0)break;
		a=b;
		b=c;
	}
	printf("%d",b);
}
```
## step03-1
主題: 質數判別
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0)bad=1;
    }
    if(bad==0)printf("%d 是質數(沒有壞掉)",n);
    else printf("%d 不是質數(早就壞掉了)",n);
}
```
## step03-2
主題: 很多質數
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int n=2;n<=a;n++){
        int bad=0;
        for(int i=2;i<n;i++){
            if(n%i==0)bad=1;
        }
        if(bad==0)printf("%d",n);
    }
}

```
## step03-3.1
主題: 實習講解、練習
[for2] 以*輸出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if(k<=n-i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
```
## step03-3.2
主題: 實習講解、練習
[while2] 以*輸出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int k=1;
		while(k<=n){
			if(k<=n-i)printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}

```
## step03-3.3
主題: 實習講解、練習
找出所有的因數
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0)printf("%d,",i);
	}
	printf("%d",n);
}
```
#week10
## step04-0 
考試: 列出質數
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int n=2;n<=a;n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0)bad=1;
		}
		if(bad==0)printf("%d ",n);
	}
}
```
## step04-1 
主題: 陣列
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10,20,30,40};
    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}

```
## step04-2 
主題: 陣列+迴圈
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10,20,30,40};
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
}
```
#week11
## step05-0 
考試:  百數反印
```cpp
#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0;i<100;i++){
		scanf("%d",&a[i]);
	}
	for(int i=99;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
```
## step05-1 
主題: 兩數交換
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80;
    printf("a:%d b:%d\n",a,b);

    int temp=a;
    a=b;
    b=temp;

    printf("a:%d b:%d",a,b);
}
```
## step05-2 
主題: 三數排序
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
## step05-3 
主題: 十數排序
```cpp
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
for(int i=0;i<10;i++)printf("%d ",a[i]);
printf("\n");
}
```
## step05-4
主題: 百數排序
```cpp
#include <stdio.h>
int a[100];
int main()
{
    for(int i=0;i<100;i++)printf("%d ",a[i]);
    printf("\n");
    for(int k=0;k<100-1;k++){
        for(int i=0;i<100-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<100;i++)printf("%d ",a[i]);
        printf("\n");
    }
}
```
#week12
## step06-0
考試: 百數排序-泡泡排序法
```cpp
#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0;i<100;i++){
	scanf("%d",&a[i]);
	}
	for(int k=0;k<100;k++){
		for(int i=0;i<100-1;i++){
			if(a[i]>a[i+1]){
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			}
		}
	}
	for(int i=0;i<100;i++){
		printf("%d\n",a[i]);
	}
}
```
## step06-1
主題: 排序-選擇排序法
```cpp
#include <stdio.h>
int a[5] = {5,4,3,2,1};
int main()
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<5;i++)printf("%d ",a[i]);
}
```
## step06-2
主題: 二維陣列
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={{10,20,30},{40,50,60}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## step06-3
主題: 矩陣加法
```cpp
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
```
## step06-4
主題: 矩陣乘法
```cpp
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;//a[i][j]+b[i][j];
			for(int k=0;k<n;k++){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}	
}
```
#week13
## step07-0
考試: 矩陣加法
```cpp
#include <stdio.h>
int a[10][10],b[10][10];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
```
## step07-1
主題: 左手i 右手j(選擇排序、最佳買賣點、2D陣列)
```cpp
#include <stdio.h>
int a[100];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int left,right;
    int ans = -99999999;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]>ans){
                ans = a[j] - a[i];
                left = a[i];
                right = a[j];
            }
        }
    }
    printf("請按任意鍵繼續...\n");
    printf("最大利潤=%d-%d=%d\n",right,left,ans);
}
```
## step07-2
主題: A4白紙/黃金比例/Fibonacci數列
```cpp
#include <stdio.h>
int a[50];
int main()
{
    a[0]=0;
    a[1]=1;
    ///數學歸納法，a[0]a[1]要先有，才能自動繼續
    for(int i=2;i<45;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<45;i++){
        printf("%d ",a[i]);
    }
}
```
## step07-3
主題: [array]-矩陣轉180
```cpp
#include <stdio.h>
int a[200][200];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}
```
## step07-4
主題: Function 函式/函數
```cpp
#include <stdio.h>
int addnum(int a,int b)
{
    return a+b;
}
int main()
{
    int ans = addnum(2,3);
    printf("addnum(2,3)會得到 %d\n",ans);
}
```
#week14
## step08-0
考試: Fibonacci費氏數列
```cpp
#include <stdio.h>
int a[50];
int main()
{
	a[0]=1;
	a[1]=1;
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
```
## step08-1.1
主題: 函式(宣告/定義、使用呼叫、回傳/參數、變數範圍)
```cpp
#include <stdio.h>
int a=10;
void func()
{
    a=30;
    printf("func()中a改成:%d\n",a);
}
int main()
{
    printf("main()中a是:%d\n",a);
    func();
    printf("main()中a是:%d\n",a);
}
```
## step08-1.2
主題: 函式(宣告/定義、使用呼叫、回傳/參數、變數範圍)
```cpp
#include <stdio.h>
int a=10;
void func()
{
    a=20;
    printf("func()中a是:%d\n",a);
    a=30;
    printf("func()中a改成:%d\n",a);
}
int main()
{
    printf("main()中a是:%d\n",a);
    func();
    printf("main()中a是:%d\n",a);
}
```
## step08-2
主題: 函式呼叫函式
```cpp
#include <stdio.h>
int n=30;
int funcA(int a,int b)
{
    printf("funcA()的a,b是:%d %d\n",a,b);
    return a + b;
}
int funcB(int n)
{
    printf("funcB()的 n 是:%d\n",n);
    int ans=funcA(n,n);
    return ans;
}
int main()
{
    int a=10,b=20;
    funcB(b);
    funcA(a,b);
    printf("main()的a,b是:%d %d\n",a,b);
}
```
## step08-3
主題: 最大公因數的函式解法
```cpp
#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0)return b;
    if(b==0)return a;

    return gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans = gcd(a,b);
    printf("%d",ans);
}
```
## step09-0
考試: gcd函式
```cpp
#include <stdio.h>
int gcd(int a, int b)
{
	if(a==0)return b;
	if(b==0)return a;
	
	return gcd(b,a%b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=gcd(a,b);
	printf("%d",ans);
}
```
## step09-1
主題: 字串 vs. 陣列
```cpp
```
## step09-2
主題: 字串函式
```cpp
```
## step09-3
主題: 標準 I/O 函式
```cpp
```
