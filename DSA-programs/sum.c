#include <stdio.h>
int Add();
int Add(int a, int b)
{
    int c = a + b;
    printf("The sum is :%d", c);
    return c;
}
int main()
{
    Add(5, 5);
    return 0;
}