#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
char Stack[MAX];
int top = -1;
void push(char item)
{
    if (top == MAX - 1)
        printf("Overflow.\n");
    else
        Stack[++top] = item;
}
char pop()
{
    if (top == -1)
        printf("Underflow.\n");
    else
        return Stack[top--];
}
int main()
{
    char str[MAX];
    int i;
    printf("Input  a string:");
    gets(str);
    printf("The Original string:");
    puts(str);
    for (i = 0; str[i] != '\0'; i++)
        push(str[i]);
    for (i = 0; i < strlen(str); i++)
        str[i] = pop();
    str[i] = '\0';
    printf("The Reversed string:");
    puts(str);
    return 0;
}