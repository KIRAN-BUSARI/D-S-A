#include <stdio.h>
typedef struct
{
    char name[20];
    char usn[10];
    int marks;
    float percentage;
} student;

union
{
    char name[20];
    char usn[10];
    int marks;
    float percentage;
} student1;
int main()
{
    printf("%i\n", sizeof(student));
    printf("%i\n", sizeof(student1));
    return 0;
}