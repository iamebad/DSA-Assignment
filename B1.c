// Write a menu driven program for Stack implementation (PUSH, POP, DISPLAY) using array.
#include<stdlib.h>
#include <stdio.h>
#define MAX 10
int Stack[MAX];
int top = -1;
void push(int item)
{
    if (top == MAX - 1)
        printf("Overflow.\n");
    else
        Stack[++top] = item;
}
void pop()
{
    int item;
    if (top == -1)
        printf("Underflow.\n");
    else
    {
        item = Stack[top--];
        printf("%d Poped sucessfully.", item);
    }
}
void display()
{
    if (top == - 1)
        printf("Stack is Empty.");
    else
    {
        printf("The Stack:-");
        for (int i = top; i >= 0; i--)
            printf("%d \n", Stack[i]);
    }
}
int main()
{
    int item, choice;
    do
    {
        printf("\n*****MENU***** \n1.Push an Element.\n2.Pop an Element.\n3.Display Stack.\n4.Exit.");
        printf("\nEnter Your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Insert the number to be pushed.: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
           exit(0);
        default:
            printf("\nInvalid Choice!press Again.");
        }
    }while(choice!=4);
    return 0;
}

