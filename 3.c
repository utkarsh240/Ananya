#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,m,k,flag=0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&n,&m);
    int **a=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++)
    {
        a[i]=(int *)malloc(m*sizeof(int));
    }
    printf("Enter the elements of the matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // checking whether the matrix is sparse or not.
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("The matrix is sparse.\n");
    }
    else
    {
        printf("The matrix is not sparse.\n");
    }
    // display
    printf("The matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}