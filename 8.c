#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&r,&c);
    int **a=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++)
    {
        a[i]=(int *)malloc(c*sizeof(int));
    }
    printf("Enter the elements of the matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is: ");
    for(i=0;i<r;i++)
    {
        printf(" ");
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf(" ");
    }
    printf(" ");
    int flag=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j && a[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }

    if(flag==0)
    {
        printf("The matrix is a lower triangular matrix");
    }
    else
    {
        flag=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>j && a[i][j]!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("The matrix is a upper triangular matrix");
        }
        else
        {
            flag=0;
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    if(i!=j && a[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                printf("The matrix is a diagonal matrix");
            }
            else
            {
                flag=0;
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        if((i==j || i==j+1 || i==j-1) && a[i][j]!=0)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                    printf("The matrix is a tri diagonal matrix");
                }
                else
                {
                    printf("The matrix is not a triangular matrix");
                }
            }
        }
    }
    return 0;
}
