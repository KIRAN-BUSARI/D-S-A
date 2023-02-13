#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p1, *p2;
    p1 = (int *)malloc(sizeof(int));
    p2 = (int *)malloc(sizeof(int));
    // p3 = (int *)malloc(sizeof(int));

    printf("Enter 1st and 2nd Number:");
    scanf("%d%d", p1, p2);
    // *p3 = *p1 + *p2;
    printf("The sum is:%d\n", *p1 + *p2);

    printf("The address is %p\n", p1);
    printf("The address is %p\n", p2);

    free(p1);
    free(p2);
    // free(p3)
    return 0;
}