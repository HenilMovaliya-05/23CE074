#include<stdio.h>

int factorial();
void main()
{
    int ans;
    ans=factorial();
    printf("Factorial is :%d",&ans);
}
int factorial()
{
    int n,i,fact=1;
    printf("Enter n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
