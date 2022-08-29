#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int largest(int *,int);

void main()
{
    int *p,i,n,max;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    max=p[0];
    for(i=1;i<n;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    printf("\nThe largest element in the array is : %d",max);
    getch();
}

int largest(int *p,int n)
{
    int i,max;
    if(n==1)
    {
        return p[0];
    }
    else
    {
        max=largest(p,n-1);
        if(p[n-1]>max)
        {
            max=p[n-1];
        }
        return max;
    }
}