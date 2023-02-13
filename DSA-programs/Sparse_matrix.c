#include <stdio.h>
typedef struct
{
    int row, col, value;
} Nz_terms;

int main()
{
    Nz_terms a[10], b[10];
    int i, j, n, k;
    printf("Enter the size of the Non zero elements:");
    scanf("%d", &n);
    printf("Enter the sparse matrix:\n");
    for (i = 0; i <= n; i++)
    {
        scanf("%d %d %d", &a[i].row, &a[i].col, &a[i].value);
    }
    // Copying the first line of the elements to b[n].....
    b[1].row = a[1].row;
    b[1].col = a[1].col;
    b[1].value = a[1].value;
    // Shifting a[1] to b[].......
    // To reading col value
    for (i = 0; i < a[0].col; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (a[j].col == i)
            {
                b[k].row = a[j].col;
                b[k].col = a[j].row;
                b[k].value = a[j].value;
                k++;
            }
        }
    }
    printf("The transpose of the matrix is...\n");
    for (k = 0; k < n; k++)
    {
        printf("%d %d %d\n", b[k].row, b[k].col, b[k].value);
    }

    return 0;
}