#include <stdio.h>
int f(int a,int b)
{
    if(b==0) return a;
    return f(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",f(a,b));
    return 0;
}