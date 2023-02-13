#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int R = -1, F = -1;
int Q[MAX];
int e;
void Insert();
void Delete();
void Display();
void Insert()
{
    if (R == MAX - 1)
    {
        printf("Queue is FULL..");
    }
    else
    {
        printf("Enter the element to be Inserted:");
        scanf("%d", &e);
        R++;
        Q[R] = e;
    }
}
void Delete()
{
    if (R == F)
    {
        printf("Queue is Empty...");
    }
    else
    {
        F++;
        e = Q[F];
    }
}
void Display()
{
    int i;
    if (R == F)
    {
        printf("Queue is Empty.");
    }
    else
    {
        for (i = R; i > F; i++)
        {
            printf("%d", Q[i]);
        }
    }
}
int main()
{
    int ch;
    printf("1.Insert.\n2.Delete.\n3.Display.\n4.exit.\n");
    printf("Enter your choice");
    scanf("%d", &ch);
    do
    {
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Input..");
            break;
        }
    } while (ch != 4);
    return 0;
}