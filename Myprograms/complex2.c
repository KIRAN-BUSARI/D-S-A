// program to add complex number with arguments and without return value..
#include <stdio.h>
int complex();
int complex()
{
    int a_real = 5, b_real = 2, a_img = 2, b_img = 5;
    int c_real = a_real + b_real, c_img = a_img + b_img;
    printf("The sum of two complex number is:%d+i%d", c_real, c_img);
    return c_real, c_img;
}
int main()
{
    complex();
    return 0;
}
