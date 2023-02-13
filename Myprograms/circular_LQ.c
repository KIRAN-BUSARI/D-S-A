#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    linked_cq *link;
} linked_cq;
linked_cq *last = NULL;
void insert_front()
{
    linked_cq *temp;
    temp = (linked_cq *)malloc(sizeof(linked_cq));
    printf("Enter the element:");
    scanf("%d", temp->data);
    if (last == NULL)
    {
        temp->link = temp;
        last = temp;
    }
    else
    {
        temp->link = last->link;
        last->link = temp;
    }
}
void insert_end()
{
    linked_cq *temp;
    temp = (linked_cq *)malloc(sizeof(linked_cq));
    printf("Enter the element:");
    scanf("%d", temp->data);
    if (last == NULL)
    {
        temp->link = temp;
        last = temp;
    }
    else
    {
        temp->link = last->link;
        last->link = temp;
    }
    last = temp;
}
delete_cq_front()
{
    linked_cq *temp;
    temp = (linked_cq *)malloc(sizeof(linked_cq));
    if (last == NULL)
    {
        printf("Circular queue is Empty..");
    }
    else if (last->link == last)
    {
        temp = last;
        printf("The deleted element is %d", temp->data);
        last->link = NULL;
    }
    else
    {
        temp = last->link;
        printf("The deleted element is %d", temp->data);
        last->link = temp->link;
    }
    free(temp);
}


int main()
{

    return 0;
}