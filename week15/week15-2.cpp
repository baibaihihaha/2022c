///ASCII 32+32=64 A:65 32+32+32=96 a:97
#include <stdio.h>
int main()
{
    printf("%c : %d\n", 65, 65);
    printf("%c : %d\n", 66, 66);
    printf("%c : %d\n", 67, 67);
    printf("%c : %d\n", 'A', 'A');
    printf("%c : %d\n", 'B', 'B');
    printf("%c : %d\n", 'C', 'C');
    printf("�W���Ϊ��Ʀr 64 �γ�޸� 'a' �����G���@��\n");
    printf("%c : %d\n", 97, 97);
    printf("%c : %d\n", 'a', 'a');
}
