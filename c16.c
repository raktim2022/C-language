// Write a program to implement the following operations on a CIRCULAR QUEUE using Array:
// a) INSERT b) DELETE c) DISPLAY

#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;
int isFull()
{
    // Queue is full if rear is just behind front (circularly)
    return (front == (rear + 1) % MAX_SIZE);
}

int isEmpty()
{
    // Queue is empty if front and rear are both -1
    return (front == -1 && rear == -1);
}

void insert(int x)
{
    if (isFull())
    {
        printf("Queue is full");
        return;
    }
    if (isEmpty())
    {
        front = rear = 0;
    }
    else{
        rear = (rear + 1) % MAX_SIZE;
    }
    queue[rear] = x;
    printf("%d inserted into queue.\n", x);
}
void delete()
{
    if (isEmpty())
    {
        printf("Queue Underflow. Cannot delete element.\n");
        return;
    }
    printf("%d deleted from queue.\n", queue[front]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else{
        front = (front + 1) % MAX_SIZE;
    }

}
void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    do
    {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX_SIZE; // Circular increment
    } while (i != (rear + 1) % MAX_SIZE);
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(20);
    insert(20);
    insert(20);
    insert(20);
    insert(30);

    display();

    delete ();

    display();

    return 0;
}