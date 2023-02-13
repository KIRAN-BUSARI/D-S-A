/*program to add two complex numbers without rguments and without return value*/
#include <stdio.h>
void complex();
void complex()
{
    int real, img;
    int a_real = 2, b_real = 5, c_real;
    int a_img = 5, b_img = 2, c_img;
    c_real = a_real + b_real;
    c_img = a_img + b_img;
    printf("The sum of two complex number is:%d+i%d", c_real, c_img);
}
int main()
{
    complex();
    return 0;
}