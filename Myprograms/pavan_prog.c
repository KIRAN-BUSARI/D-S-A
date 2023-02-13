#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float coe;
    int expo;
} polynomial;
void main()
{
    polynomial p1[10], p2[10], p3[10];
    int n1, n2, i = 0, j = 0, k = 0;
    float coef;
    printf("Enter the number of element in first polynomial: ");
    scanf("%d", &n1);
    printf("Enter the number of element in second polynomial: ");
    scanf("%d", &n2);
    printf("Enter coefficient and power of first polynomial:\n");
    for (int c = 0; c < n1; c++)
        scanf("%f%d", &p1[c].coe, &p1[c].expo);
    printf("Enter coefficient and power of second polynomial:\n");
    for (int c = 0; c < n2; c++)
        scanf("%f%d", &p2[c].coe, &p2[c].expo);
    while (i < n1 && j < n2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].expo = p1[i].expo;
            coef = p1[i].coe + p2[j].coe;
            p3[k].coe = coef;
            i++;
            j++;
            k++;
            // break;
        }
        else if (p1[i].expo > p2[j].expo)
        {
            p3[k].expo = p1[i].expo;
            p3[k].coe = p1[i].coe;
            i++;
            j++;
            k++;
            // break;
        }
        else // if(p2[j].expo>p1[i].expo)
        {
            p3[k].expo = p2[j].expo;
            p3[k].coe = p2[j].coe;

            j++;
            k++;
            // break;
        }
    }
    if (n1 < n2)
    {
        for (; j < n2; j++)
        {
            p3[k].expo = p2[j].expo;
            p3[k].coe = p2[j].coe;
            k++;
        }
    }
    else // if(n2<n1)
    {
        for (; i < n1; i++)
        {
            p3[k].expo = p1[i].expo;
            p3[k].coe = p1[i].coe;
            k++;
        }
    }
    printf("\nThis is the sum of 2 polynomial:\n");
    for (int z = 0; z < k; z++)
        printf("%.1fx^%d+", p3[z].coe, p3[z].expo);
}
