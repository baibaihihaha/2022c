#include <stdio.h>
int main()
{
    long long int a,b; ///�ܪ��ܪ������a,b
    scanf("%lld%lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){ ///�n�C��!!!
        if(a%i==0&&b%i==0)ans=i;
    }
    printf("���׬O:%lld\n",ans);
}
