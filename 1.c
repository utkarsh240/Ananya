#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, x;
    int sum = 0;
    printf("Order of Polynomial :- ");
    scanf("%d", &n);
    int *poly = (int *)malloc((n + 1) * sizeof(int));

    printf("Enter the coefficients of the polynomials : \n");
    for (int i = 0; i < n + 1; i++)
        scanf("%d", &poly[i]);


    printf("The polynomial is \n");
    for (int i = 0; i < n; i++)
        printf("%d*x^(%d) + ", poly[i], (n - i));

    printf("The Value of 'x' = ");
    scanf("%d", &x);

    
    for (int i = 0; i < n + 1; i++)
        sum = sum + (poly[i] * pow(x, (n - i)));

    printf("%d = 0", poly[n]);

    printf("\nThe SUM is %d", sum);
    return 0;
}
