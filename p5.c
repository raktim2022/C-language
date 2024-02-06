// Write a program to implement the following operations on a LINEAR QUEUE using Array:
// a) INSERT b) DELETE c) DISPLAY

#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void insert(int x){
    if(rear==MAX_SIZE-1){
        printf("Queue is full");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    queue[++rear] = x;
    printf("%d inserted into queue.\n", x);
}
void delete(){
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow. Cannot delete element.\n");
        return;
    }
    printf("%d deleted from queue.\n", queue[front++]);
    if (front > rear)
    {
        front = rear = -1;
    }
}
void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
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