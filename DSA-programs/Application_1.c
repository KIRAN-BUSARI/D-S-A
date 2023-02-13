#include <stdio.h>
typedef struct
{
    float coef;
    int expo;
} polynomial;
int main()
{
    polynomial p[10];
    int i, n;
    printf("Enter the size of the polynimial:");
    scanf("%d", &n);
    printf("Enter the coefficient and exponential:");
    for (i = 0; i < n; i++)
    {
        scanf("%f %d", &p[i].coef, &p[i].expo);
    }
    printf("The required polynomial is:");
    for (i = 0; i < n; i++)
    {
        printf("%fX^%d+", p[i].coef, p[i].expo);
    }
    return 0;
}