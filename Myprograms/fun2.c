/*program with argumens and without return value*/
#include <stdio.h>
void add();
void add(int a, int b)
{
    int c = a + b;
    printf("The sum is:%d", c);
}
int main()
{
    add(21, 10);
    return 0;
}