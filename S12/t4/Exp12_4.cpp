#include <stdio.h>
#define MAX(a, b, c) (a > b ? a : b, b > c ? b : c, a > c ? a : c)
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("最大的数=%d", MAX(a, b, c));
}