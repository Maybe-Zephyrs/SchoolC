#include <stdio.h>

int main()
{
    char ch;
    int n;
    printf("请输入一个字母和数字n（用空格分隔）：");
    scanf(" %c %d", &ch, &n);

    char cipher;
    if (ch >= 'A' && ch <= 'Z')
    {
        cipher = ((ch - 'A' + n) % 26) + 'A';
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cipher = ((ch - 'a' + n) % 26) + 'a';
    }
    else
    {
        printf("输入的不是字母！\n");
        return 1;
    }

    printf("明文是%c，密文是%c\n", ch, cipher);
    return 0;
}