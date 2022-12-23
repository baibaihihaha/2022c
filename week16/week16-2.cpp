#include <stdio.h>
#include <string.h>
int main()
{
    char line[20]="Helle";
    int N = strlen(line);
    printf("Hello字串的長度:%d\n",N);

    char line2[200];
    strcpy(line2,line);
    printf("line2得到:%s\n",line2);

    printf("比較字串strcmp(line,line2)得到%d\n",strcmp(line,line2));
}
