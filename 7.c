#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *a,n,i,j,k,count=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count++;
        }
    }
    printf("The number %d occurs %d times in the array.",k,count);
}