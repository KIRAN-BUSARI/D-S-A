#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct linked_queue *link;
} linked_queue;
linked_queue *f = NULL;
linked_queue *r = NULL;
void insert_Q()
{
    linked_queue *temp;
    temp = (linked_queue *)malloc(sizeof(linked_queue));
    printf("Enter the element:");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (f == NULL)
    {
        f = temp;
    }
    else
    {
        // temp->link = r->link;
        r->link = temp;
        // temp = r;
    }
    r = temp;
}
void delete_Q()
{
    linked_queue *temp;
    temp = (linked_queue *)malloc(sizeof(linked_queue));
    if (f == NULL)
    {
        printf("The Linked queue is empty..");
    }
    else
    {
        temp = f;
        printf("The element deleted is %d", temp->data);
        f = f->link;
    }
    free(temp);
}
void display_Q()
{
    linked_queue *temp;
    if (f == NULL)
    {
        printf("The Linked queue is empty..");
    }
    else
    {
        temp = f;
        printf("The elements are:\n");
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
        printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_Q();
            break;
        case 2:
            delete_Q();
            break;
        case 3:
            display_Q();
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