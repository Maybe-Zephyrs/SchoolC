#include <stdio.h>
int main()
{
	int i = 10, j = 20;
	float x = 3.5;
	printf("%f\n", i %= (j %= 3));
}