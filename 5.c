#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 3, col = 3;
    int *arr = (int *)malloc(row * col * sizeof(int));
    int i, j, count;
    printf("Enter the Elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &*(arr + i * col + j));
        }
    }
    int det = (*(arr + 0 * col + 0)) * ((*(arr + 1 * col + 1)) * (*(arr + 2 * col + 2)) - (*(arr + 1 * col + 2)) * (*(arr + 2 * col + 1))) - (*(arr + 0 * col + 1)) * ((*(arr + 1 * col + 0)) * (*(arr + 2 * col + 2)) - (*(arr + 1 * col + 2)) * (*(arr + 2 * col + 0))) + (*(arr + 0 * col + 2)) * ((*(arr + 1 * col + 0)) * (*(arr + 2 * col + 1)) - (*(arr + 1 * col + 1)) * (*(arr + 2 * col + 0)));
    printf("Determinant :- %d", det);
    return 0;
}
