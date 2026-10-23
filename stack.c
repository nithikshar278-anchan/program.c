<<<<<<< HEAD
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int val;

    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &val);
        stack[++top] = val;
        printf("Element pushed successfully\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped element = %d\n", stack[top--]);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

void delete()
{
    top = -1;
    printf("Stack deleted successfully\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                delete();
                break;

            case 5:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
=======
#include<stdio.h>
int main()
{
    int choice;
    do
    {
        printf("1:insert\n");
        printf("2:delete\n");
        printf("3:peek\n");
        printf("4:display\n");
        printf("enter your choice\n");
        switch(choice)
        {
            case1:
            printf("insert");
            break;
            case2:
            printf("delete");
            break;
            case3:
            printf("peek");
            break;
            case4:
            printf("display");
            break;
            default:
            printf("no operation");
        }
    }
    while(choice<5 && choice>=1);
    return(0);
>>>>>>> e02e03a2a9b7b83d4367eb158de46847a076fd01
}
