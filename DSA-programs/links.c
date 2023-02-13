#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct node *link;
} node;
node *head, *temp, *newnode;

void Insert_front()
{
    newnode = (node *)malloc(sizeof(node));
    printf("Enter the element:");
    scanf("%d", &newnode->data);
    newnode->link = head;
    head = newnode;
}

void Insert_end()
{
    newnode = (node *)malloc(sizeof(node));
    printf("Enter the element");
    scanf("%d", &newnode->data);
    newnode->link = NULL;
    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newnode;
}

void Insert_Anywhere()
{
    int pos, i = 1;
    newnode = (node *)malloc(sizeof(node));
    printf("enter teh position:");
    scanf("%d", &pos);
    if (pos > i)
    {
        printf("Invalid Input");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->link;
            i++;
        }
        printf("Enter the data:");
        scanf("%d", &newnode->data);
        newnode->link = temp->link;
        temp->link = newnode;
    }
}

void Delete_front()
{
    temp = head;
    head = head->link;
    free(temp);
}

void Delete_End()
{
    node *prenode;
    temp = head;
    while (temp->link != NULL)
    {
        prenode = temp;
        temp = temp->link;
    }
    if (temp == head)
        head = NULL;
    else
        prenode->link = NULL;
    free(temp);
}

void Delete_anywhwere()
{
    int pos, i = 1;
    printf("Enter the position:");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        temp = temp->link;
        i++;
    }
    newnode = temp->link;
    temp->link = newnode->link;
    free(newnode);
}

int main()
{
    int ch;
    do
    {
        printf("1.INsertfront\n2.insertend\n3.insertanywhere\n4.deletefront\n5.deleteend\n6.deleteanywhere\n7.exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Insert_front();
            break;
        case 2:
            Insert_end();
            break;
        case 3:
            Insert_Anywhere();
            break;
        case 4:
            Delete_front();
            break;
        case 5:
            Delete_End();
            break;
        case 6:
            Delete_anywhwere();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid input");
            break;
        }
    } while (ch != 7);
}