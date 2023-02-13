#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i, s = 0;
    printf("Enter array size:");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
        s = s + *(p + i);
    }
    printf("Sum =%d", s);
    free(p);
    return 0;
}