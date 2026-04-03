#include <stdio.h>

int main()
{
    char ch, cipher;

    printf("请输入一个英文字母：");
    scanf_s("%c", &ch);
    cipher = ch + 4;
    printf("%c的密文是%c，ASCII为%d\n", ch, cipher, cipher);

    return 0;
}