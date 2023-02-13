#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct node *link;
    // node *link;
} node;

node *list = NULL;

// void Insert_front()
// {
//     int e;
//     node *new;
//     new = (node *)malloc(sizeof(node));
//     printf("Enter the element:");
//     scanf("%d", &e);
//     new->data = e;
//     new->link = list;
//     list = new;
//     printf("%d", list->data);
// }

// void Insert_End()
// {
//     int ele;
//     node *temp, *newnode;
//     temp = (node *)malloc(sizeof(node));
//     printf("Enter the Element:");
//     scanf("%d", &newnode->data);
//     newnode->link = NULL;
//     temp = list;
//     while (temp->link != NULL)
//     {
//         temp = temp->link;
//     }
//     temp->link = newnode;
// }

// void Insert_anywhere()
// {
//     node *newnode, *temp;
//     int pos, i = 1;
//     temp = (node *)malloc(sizeof(node));
//     printf("Enterr the position:");
//     scanf("%d", &pos);
//     if (pos > count)
//     {
//         printf()
//     }
// }
// // int main()
// // {
// //     void Insert_front();
// //     return 0;
// // }
// // void Del_at_front
// // void Display()
// // {

// // }

// // int main()
// // {
// //     int e;
// //     node *new;
// //     new = (node *)malloc(sizeof(node));
// //     printf("Enter the element:");
// //     scanf("%d", &e);
// //     new->data = e;
// //     new->link = list;
// //     list = new;
// //     printf("%d", list->data);
// //     return 0;
// // }

// void Search()
// {
//     node *temp;
//     int key;
//     printf("Enterr teh element to be searched:");
//     scanf("%d", &key);
//     temp = key;
//     while (list->data != NULL)
//     {
//         if (list->data == key)
//         {
//             printf("Element found..");
//         }
//         else
//         {
//             printf("Element not found...");
//         }
//     }
// }

void display(node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is :%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    node *head;
    node *second;
    node *third;
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));

    head->data = 2;
    head->link = second;

    second->data = 55;
    second->link = third;

    third->data = 8;
    third->link = NULL;

    display(head);
}