#include <stdio.h>
#include <stdlib.h>
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

int matching(char a, char b)
{
    if (a == '{' && b == '}')
        return 1;
    if (a == '[' && b == ']')
        return 1;
    if (a == '(' && b == ')')
        return 1;
    return 0;
}
int areBracketBalanced(char exp[])
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(exp[i]);
        else
        {
            if (top == -1)
                return 0;
            else if (!matching(pop(), exp[i]))
                return 0;
        }
    }
    if (top == -1)
        return 1;
    return 0;
}
int main()
{
    char str[MAX];
    printf("Insert Paranthesis:");
   scanf("%s",str);
    if (areBracketBalanced(str))
        printf("Balanced Bracket.");
    else
        printf("UnBalanced Bracket.");
    return 0;
}