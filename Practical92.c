#include<stdio.h>
#include<math.h>
float calculates(int,int,int);
float calculatea();

void main()
{
    calculatea();
}

float calculatea()
{
    int a,b,c,
    s,a;
    printf("Enter Valu of a,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    s= calculates(a,b,c);
    a=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %f",a);
}
float calculates(int a,int b,int c)
{
    float x;
    x=(a+b+c)/2;
    return x;
}