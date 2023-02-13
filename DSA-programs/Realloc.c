#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Enter the array size:");
    scanf("%d", &n);
    float *p;
    for (i = 0; i < n; i++)
    {
        p = (float *)calloc(10, sizeof(float));
        printf("The address is :%p\n", p);
    }
    float *p1;
    p1 = (float *)realloc(p, 5 * sizeof(float));
    for (i = 0; i < n; i++)
    {
        printf("The 2nd address is %p\n", p1);
    }
    free(p);
    free(p1);
    return 0;
}