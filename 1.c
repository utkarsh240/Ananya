#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    int x;
    printf("order of the polynomial : ");
    scanf("%d", &n);
    int *poly = (int *)malloc((n + 1) * sizeof(int));
    printf(" coefficients of the polynomials : \n");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &poly[i]);
    }
    printf("Enter the value of x \n");
    scanf("%d", &x);
    int sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum = sum + (poly[i] * pow(x, (n - i)));
    }
    printf(" polynomial is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d*x^(%d) + ", poly[i], (n - i));
    }
    printf("%d = 0\n", poly[n]);
    printf("value after putting value of x is %d .\n", sum);
    return 0;
}
