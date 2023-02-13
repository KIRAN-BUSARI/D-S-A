#include <stdio.h>
int main()
{
    int n, i;
    int *ptr;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ptr = &arr[i];
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\tThe address is :%p\n",&arr[i]);
    }
    return 0;
}