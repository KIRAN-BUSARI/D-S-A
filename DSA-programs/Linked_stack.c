#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct node *link;
} node;

node *top = NULL;
void push()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("Enter the element:\n");
    scanf("%d", &temp->data);
    temp->link = top;
    top = temp;
}
void pop()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    if (top == NULL)
    {
        printf("Linked stact is empty..\n");
    }
    else
    {
        temp = top;
        printf("The Deleted element is %d", temp->data);
        top = temp->link;
        free(temp);
    }
}
void display()
{
    node *temp;
    if (top == NULL)
    {
        printf("Linked stack is Empty..\n");
    }
    else
    {
        temp = top;
        printf("The element are : \n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("1.push\n2.pop\n3.display\n4.exit.\n");
        printf("Enter your choice:\n");
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
            break;
        default:
            printf("Invalid input..\n");
            break;
        }
    } while (ch != 4);

    return 0;
}