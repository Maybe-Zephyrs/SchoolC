#include <stdio.h>

int main()
{
    char ch, cipher;

    printf("������һ��Ӣ����ĸ��");
    scanf_s("%c", &ch);
    cipher = ch + 4;
    printf("%c��������%c��ASCIIΪ%d\n", ch, cipher, cipher);

    return 0;
}