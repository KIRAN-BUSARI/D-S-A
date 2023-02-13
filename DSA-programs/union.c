#include <stdio.h>
typedef struct
{
    char name[20];
    double id;
    int DOJ;
    int DPT;
    struct employee_salary
    {
        float basic, hra, da;
    }
} employee;

int main()
{
    employee e;
    printf(sizeof(employee));
    // printf(sizeof(employee_salary));
    return 0;
}