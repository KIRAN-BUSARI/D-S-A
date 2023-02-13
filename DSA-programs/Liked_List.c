#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int num;
    struct Node *link;
} Node;
Node *list = NULL;

// int main()
// {
//     Node *temp, *list = NULL;
//     int ele;
//     // temp = (int*)malloc(sizeof(int));//Its's for int not for Node so we shud write as..

//     temp = (Node *)malloc(sizeof(Node)); // It is used to allocate the memory form the heap for the required size..

//     // We use malloc to assign the memory to enire block as Malloc assign memory to block..

//     printf("Enter the element:");
//     scanf("%d", &ele);
//     temp->num = ele;   // To input the Element form ..
//     temp->link = NULL; // To Declare the value of link to the initial Node as NULL and to join the next Node
//     list = temp;
//     // printing the value of number and address..
//     // while (list != NULL)
//     // {
//     printf("The linked list is:%d \t \nThe address is %p", temp->num, &temp->link);
//     // }
// return 0;
// }
// void insert_front()
// {
//     int ele;
//     Node *temp;
//     temp = (Node *)malloc(sizeof(Node));
//     printf("Enter element to be inserted:");
//     scanf("%d", &temp->num);
//     if (list == NULL)
//         temp->link = NULL;
//     else
//         temp->link = list;
//     list = temp; // Updating list with new Node..
//     printf("true");
// }

// void insert_end()
// {
//     int ele;
//     Node *temp, *i;
//     temp = (Node *)malloc(sizeof(Node));
//     for (i = list; i->link != NULL; i = i->link)
//     {
//         printf("Enter the element to be inserted:");
//         scanf("%d", &ele);
//         temp->num = ele;
//         temp->link = NULL;
//         i->link = temp;
//     }
// }

void Insert_front()
{
    int ele;
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    printf("Enter the element to be inserted:");
    scanf("%d", &temp->num);
    if (list == NULL)
    {
        temp->link = NULL;
    }
    else
    {
        temp->link = list;
    }
    list = temp; // updating list with new node
}

void Insert_End()
{
    int ele;
    Node *temp, *i;
    temp = (Node *)malloc(sizeof(Node));
    for (i = list; i->link != NULL; i = i->link)
        ;
    printf("Enter the element");
    scanf("%d", &ele);
    temp->num = ele;
    temp->link = NULL;
    i->link = temp;
}

void Insert_Anywhere(Node *p)
{
    int ele;
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    printf("Enter the element:");
    scanf("%d", &ele);
    // temp->num = ele;
    // temp->link = p->link;
    // p->link = temp;
    if (p == NULL)
    {
        printf("Invalid insertion");
    }
    else
    {
        temp->num = ele;
        temp->link = p->link;
        p->link = temp;
    }
}

void Display()
{
    Node *i;
    for (i = list; i->link != NULL; i = i->link)
    {
        printf("%d", i->num);
    }
}
int main()
{
    int ch;
    do
    {
        printf("1.Insert_front\n2.Insert_end\n3.Insert_anywhere\n4.Exit\n5.Display\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Insert_front();
            break;
        case 2:
            Insert_End();
            break;
        case 3:
            Insert_Anywhere(1);
            break;
        case 4:
            exit(0);
            break;
        case 5:
            Display();
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    } while (ch != 4);
    return 0;
}