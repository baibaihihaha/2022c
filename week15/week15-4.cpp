#include <stdio.h>
char line[3000];  ///�~���ŧi�}�C�i�H���
int main()
{
    printf("�п�J�@��r��,���n���Ů��: ");

    scanf("%s",line);
   /// printf("%s",line);
    int N=0;
    for(int i=0;line[i]!=0;i++){   ///�r�ꪺ�j��
        N++;
    }  ///�b�Ʀ��X�Ӧr���b�r��̭�
    for(int i=N-1;i>=0;i--){
        printf("%c",line[i]);
    }
}
