#include <stdio.h>
int Fibo(int);
int main()
{
    // int i, fibo[0] = 0, fibo[1] = 1, n;
    int i, n;
    printf("Enter the number you want to print the fibonacci series\n:");
    scanf("%d", &n);
    // printf("The fibonacii series is:%d\t",Fibo(return));
    for (i = 0; i < n; i++)
        printf("%d  ", Fibo(i));
    return 0;
}
int Fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (Fibo(n - 1) + Fibo(n - 2));
}