#include<stdio.h>
int f(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++) s+=i;
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",f(a));
    return 0;
}
