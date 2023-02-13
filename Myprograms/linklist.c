#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct node *link;
} node;
struct node *list = NULL;
void insert_Front()
{
    int ele;
    struct node *temp;
    printf("Enter the element to be insert:\n");
    scanf("%d", &ele);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = ele;
    if (list == NULL)
    {
        temp->link = NULL;
        list = temp;
    }
    else
    {
        temp->link = list;
        list = temp;
    }
}
void insert_End()
{
    int ele;
    struct node *temp, *p;
    printf("Enter the element to be insert:\n");
    scanf("%d", &ele);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = ele;
    for (p = list; p->link != NULL; p = p->link)
        ;
    p->link = temp;
    temp->link = NULL;
}
// void insert_Anywhere()
// {
//     int ele, new;
//     struct node *p, *temp;
//     if (list == NULL)
//         printf("list is empty\n");
//     else
//         printf("Enter the element to be insert :");
//     scanf("%d", &new);
//     printf("Enter the element  where it need to be inserted:\n");
//     scanf("%d", &ele);
//     temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = new;
//     for (p = list; p->data != ele; p = p->link)
//         ;
//     temp->link = p->link;
//     p->link = temp;
// }
void Insert_Anywhere(Node *p)
{
}
// void display()
// {
//     struct node *p;
//     if (list == NULL)
//         printf("list is empty\n");
//     else
//         printf("your list\n");
//     p = list;
//     while (p->link != NULL)
//     {
//         printf("%d\n", p->data);
//         p = p->link;
//     }
//     printf("%d\n", p->data);
// }
void main()
{
    int i;
    do
    {
        int c;
        printf("1.Insertfirst \n2.Insertend \n3.Insertanywere \n4.Display \n5.exit\n");
        printf("Enter the choice\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            incertfirst();
            break;
        case 2:
            incertend();
            break;
        case 3:
            incertanywere();
            break;
        case 4:
            display();
            break;
        case 5:
            exit;
            break;
        }
        i = c;
    } while (i != 5);
    return;
}