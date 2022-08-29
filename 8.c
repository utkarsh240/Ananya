#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,k,l,m,p,q,r,s,t,u,v,w,x,y,z;
    printf("\nEnter the number of rows and columns of the matrix: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("\nEnter the elements of the matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j)
            {
                if(a[i][j]!=0)
                {
                    printf("\nThe matrix is not a lower triangular matrix");
                    break;
                }
            }
            else if(i<j)
            {
                if(a[i][j]!=0)
                {
                    printf("\nThe matrix is not a upper triangular matrix");
                    break;
                }
            }
            else if(i==j)
            {
                if(a[i][j]!=1)
                {
                    printf("\nThe matrix is not a tri diagonal matrix");
                    break;
                }
            }
        }
    }
    if(i==n && j==m)
    {
        printf("\nThe matrix is a lower triangular matrix");
    }
    if(i==n && j==m)
    {
        printf("\nThe matrix is a upper triangular matrix");
    }
    if(i==n && j==m)
    {
        printf("\nThe matrix is a tri diagonal matrix");
    }
    return 0;
}