/*program without arguments and without return value*/
#include <stdio.h>
void Add(void);
void Add(void)
{
    int a = 12, b = 3;
    int s = a + b;
    printf("The sum is:%d", s);
}
int main()
{
    Add();
    return 0;
}