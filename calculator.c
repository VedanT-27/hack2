#include<stdio.h>
int sum(int a,int b)
{
return a+b;
}

int mul(int a, int b)
{
    return a*b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("sum=%d",sum(a,b));
    printf("mul=%d",mul(a*b));
}
