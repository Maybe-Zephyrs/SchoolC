#include <stdio.h>
int main()
{
    int year, month, day, sum, Feb;
    printf("请输入年月日：");
    scanf("%d/%d/%d", &year, &month, &day);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        Feb = 29;
    else
        Feb = 28;
    switch (month - 1)
    {
    case 0:
        sum = day;
        break;
    case 1:
        sum = 31 + day;
        break;
    case 2:
        sum = 31 + Feb + day;
        break;
    case 3:
        sum = 31 + Feb + 31 + day;
        break;
    case 4:
        sum = 31 + Feb + 31 + 30 + day;
        break;
    case 5:
        sum = 31 + Feb + 31 + 30 + 31 + day;
        break;
    case 6:
        sum = 31 + Feb + 31 + 30 + 31 + 30 + day;
        break;
    case 7:
        sum = 31 + Feb + 31 + 30 + 31 + 30 + 31 + day;
        break;
    case 8:
        sum = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + day;
        break;
    case 9:
        sum = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        break;
    case 10:
        sum = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        break;
    case 11:
        sum = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        break;
    }
    printf("该日期是该年的第%d天\n", sum);
    return 0;
}