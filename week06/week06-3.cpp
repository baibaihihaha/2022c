#include <stdio.h>
int main()
{
    printf("�п�J2�ӼƦr: ");
    int a,b,c;///�j���p
    scanf("%d%d",&a,&b);
    while(1){///�@����
        c=a%b;///�p
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;///�ѤG�ܦѤj
        b=c;///�ѤT�ܦѤG
    }
    printf("�����O:%d",b);
}
