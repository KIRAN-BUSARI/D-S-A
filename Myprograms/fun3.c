/*program with argments and with return value*/

#include <stdio.h>
int add();
int add(int a, int b)
{
    // int a, b, c;
    int c;
    c = a + b;
    printf("THe sum is :%d", c);
    return c;
}
int main()
{
    add(10, 12);
    return 0;
}