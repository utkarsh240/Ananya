#include <stdio.h>
#include <stdlib.h>
void input(int *p, int o)
{
    for (int i = 0; i <= o; i++)
    {
        scanf("%d", &p[i]);
    }
}
void calculate(int *p, int *q, int *r, int a, int b, int n)
{
    int i, j = 0, k = 0;
    for (i = 0; i <= n; i++)
    {
        if ((a - j) == (b - k) && (a - j) == (n - i))
        {
            r[i] = p[j] + q[k];
            j++;
            k++;
        }
        else if ((a - j) == (n - i) && (a - j) != (b - k))
        {
            r[i] = p[j];
            j++;
        }
        else if ((b - k) == (n - i) && (a - j) != (b - k))
        {
            r[i] = q[k];
            k++;
        }
    }
}
void display(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d*x^(%d) + ", p[i], (n - i));
    }
    printf("%d. \n", p[n]);
}
void main()
{
    int *p1, *p2, n1, n2;
    printf("Enter the order of the 1st polynomial: ");
    scanf("%d", &n1);
    printf("Enter the order of the 2nd polynomial: ");
    scanf("%d", &n2);
    p1 = (int *)malloc((n1 + 1) * sizeof(int));
    p2 = (int *)malloc((n2 + 1) * sizeof(int));
    printf("Enter the coefficients of the 1st polynomial \n");
    input(p1, n1);
    printf("Enter the coefficients of the 2nd polynomial \n");
    input(p2, n2);
    int m;
    if (n1 > n2)
        m = n1;
    else
        m = n2;
    int *p3;
    p3 = (int *)malloc(m * sizeof(int));
    calculate(p1, p2, p3, n1, n2, m);
    printf("1st polynomial is \n");
    display(p1, n1);
    printf("2nd polynomial is \n");
    display(p2, n2);
    printf("The sum of polynomial is \n");
    display(p3, m);
}