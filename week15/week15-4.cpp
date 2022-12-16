#include <stdio.h>
char line[3000];  ///外面宣告陣列可以比較
int main()
{
    printf("請輸入一堆字母,不要有空格喔: ");

    scanf("%s",line);
   /// printf("%s",line);
    int N=0;
    for(int i=0;line[i]!=0;i++){   ///字串的迴圈
        N++;
    }  ///在數有幾個字母在字串裡面
    for(int i=N-1;i>=0;i--){
        printf("%c",line[i]);
    }
}
