#include <stdio.h>
typedef struct
{
    float coef;
    int expo;
} polynomial;
int main()
{
    polynomial p1[10], p2[10], p3[10];
    int i, j, k = 0, n, m, coef;
    printf("Enter the size of the 1st polynimial:");
    scanf("%d", &n);
    printf("Enter the coefficient and exponential power  of 1st polynomial:");
    for (i = 0; i < n; i++)
    {
        scanf("%f %d", &p1[i].coef, &p1[i].expo);
    }
    printf("Enter the size of the 2nd polynimial:");
    scanf("%d", &m);
    printf("Enter the coef and expo of 2nd polynomial :");
    for (j = 0; j < m; j++)
    {
        scanf("%f %d", &p2[i].coef, &p2[i].expo);
    }
    while (i < n && j < m)
    {
        if (p1[i].expo > p2[j].expo)
        {
            p3[k].coef = p1[i].coef;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        else if (p2[j].expo > p1[i].expo)
        {
            p3[k].coef = p2[j].coef;
            p2[k].expo = p2[j].expo;
            j++;
            k++;
        }
        else
        {
            coef = p1[i].coef + p2[j].coef;
            p3[k].coef = coef;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
            k++;
        }
    }
    if (n > m)
    {
        for (; i < n; i++)
        {
            p3[k].coef = p1[i].coef;
            p3[k].expo = p1[i].expo;
            k++;
        }
    }
    else if (m > n)
    {
        for (; j < m; j++)
        {
            p3[k].coef = p2[j].coef;
            p3[k].expo = p2[j].expo;
            k++;
        }
    }
    printf("The sum of two polynomials is:");
    if (n > m)
    {
        for (k = 0; k < n; k++)
        {
            printf("%fX^%d", p3[k].coef, p3[k].expo);
        }
    }
    else
    {
        for (k = 0; k < m; k++)
        {
            printf("%fX^%d", p3[k].coef, p3[k].expo);
        }
    }

    return 0;
}