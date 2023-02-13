/*program without arguments and with return value*/
#include <stdio.h>
int add();
int add()
{
    int a = 50, b = 10, c;
    c = a + b;
    
    printf("The sum is:%d", c);
    return c;
}
int main()
{
    add();
    return 0;
}