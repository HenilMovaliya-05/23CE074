#include<stdio.h>

void main ()
{
    int a[3][3],b[3][3],mul[3][3]={0};
    int i,j,k;

    printf("Enter The Elements Of a ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Matrix a is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter The Elements Of b ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf(" Matrix b is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                mul[i][j]=mul[i][j] + a[i][k]*b[k][j];
            }
        }
    }

    printf("Multiplication Matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

}