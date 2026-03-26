#include <stdio.h>

int main()
{
    float c, f;

    printf("�����������¶ȣ�");
    scanf_s("%f", &c);
    f = c * 9 / 5 + 32;
    printf("��Ӧ�Ļ����¶�Ϊ��%.2f\n", f);

    return 0;
}