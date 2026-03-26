#include <stdio.h>
int main()
{
	int i = 10, j = 20;
	float x = 3.5;
	printf("%f\n", (float)(i + j) / 2 + (int)x % (-5));
}