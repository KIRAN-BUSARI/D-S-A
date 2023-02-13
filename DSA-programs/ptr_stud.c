#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[20];
    char usn[10];
    char branch;
    int roll;
} stud;
int main()
{
    stud s;
    stud *ptr;
    ptr = &s;
    printf("Enter the Name:\n");
    scanf("%s", ptr->name);
    printf("Enter the USN:\n");
    scanf("%s", ptr->usn);
    printf("Enter the Branch:\n");
    scanf("%s", ptr->branch);
    printf("Enter the ROll_no:\n");
    scanf("%i", ptr->roll);

    printf("Student name is:%s\n", ptr->name);
    printf("Student name is:%s\n", ptr->usn);
    printf("Student name is:%s\n", ptr->branch);
    printf("Student name is:%i\n", ptr->roll);
    return 0;
}