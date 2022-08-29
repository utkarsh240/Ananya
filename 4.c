#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,n,**a,**b;
    printf("enter the order of matrix\n");
    scanf("%d",&n);
    a=(int **)malloc(n*sizeof(int *));
    b=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
        b[i]=(int *)malloc(n*sizeof(int));
    }
    printf("enter the elements of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("transpose of matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}