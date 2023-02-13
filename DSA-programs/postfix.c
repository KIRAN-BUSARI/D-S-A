#include <stdio.h>
#include <ctype.h>
int top = -1;
char s[20];
char infix[20];
char postfix[20];
void push(char);
void pop();
int prior(char);
int main()
{
    int i, j = 0;
    printf("Enter the infix expression:");
    scanf("%s", infix);
    
    return 0;
}