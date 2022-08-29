#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, n, sum = 0;
    int **a;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    a = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        a[i] = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of the matrix: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = 0; j < n; j++)
        {
            k = k * a[j][(i + j) % n];
        }
        sum = sum + k;
    }
    printf("The determinant of the matrix is: %d", sum);
    return 0;
}
