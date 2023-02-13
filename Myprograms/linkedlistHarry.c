#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int num;
    struct Node *link;
} Node;
void traversing(Node *p)
{
    while (p != NULL)
    {
        printf("%d \n %p", p->num, &p->link);
        p = p->link;
    }
}

int main()
{
    Node *temp1, *temp2, *temp3;
    temp1 = (Node *)malloc(sizeof(Node));
    temp2 = (Node *)malloc(sizeof(Node));
    temp3 = (Node *)malloc(sizeof(Node));

    temp1->num = 12;
    temp1->link = temp2;

    temp2->num = 56;
    temp2->link = temp3;

    temp3->num = 23;
    temp3->link = NULL;
    
    traversing(temp1);
    return 0;
}