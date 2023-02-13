#include <stdio.h>
#define MAX 5
int top = -1;
int s[MAX], e;
void push();
void pop();
void display();
int main()
{
    int ch;
    printf("\n1.push.\n2pop.\n3.display.\n4.exit.");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid input....");
    }
    return 0;
}

void push()
{
    if (top == MAX - 1)
    {
        printf("Stack is full..U can't add more elements");
    }
    else
    {
        printf("Enter the element to be inserted..");
        scanf("%d", &e);
        s[top] = e;
        top++;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack doesn't contains any elements..");
    }
    else
    {
        s[top] = e;
        printf("The element poped is%d", e);
        top--;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty..");
    }
    else
    {
        printf("Stack elements are...");
        for (i = top; i <= 0; i--)
        {
            printf("%d", s[i]);
        }
    }
}