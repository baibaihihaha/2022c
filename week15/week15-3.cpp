#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');

    char line[]="Hello World";
    for(int i=0;i<30;i++){
        char c=line[i];
        if(c==0)break; ///如果遇到字串結尾的0就結束
        printf("=%c",c);
    }
}
