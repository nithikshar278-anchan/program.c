#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue()
{
    int val;

    if (rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &val);

        if (front == -1)
            front = 0;

        queue[++rear] = val;
        printf("Element inserted successfully\n");
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element = %d\n", queue[front]);
    }
}

void deleteQueue()
{
    front = -1;
    rear = -1;
    printf("Queue deleted successfully\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- QUEUE OPERATIONS ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                deleteQueue();
                break;

            case 5:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
