#include<stdio.h>

void factorial(int);
void main()
    {
        int n;
        printf("Enter n ");
        scanf("%d",&n);
        factorial(n);
    }
    void factorial(int n)
    {
        int i,fact=1;
        for(i=0;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial is %d",fact);
    }
