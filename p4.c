// Write a program to implement the following operations on a STACK using Array:
// a) PUSH b) POP c) DISPLAY
#include<stdio.h>
#define Max 100
int STACK[Max];
int top = -1;
void push(int x){
    if(top>=Max){
        printf("Full");
        return;
    }
    STACK[++top]=x;
    printf("Element pushed \n");
}
void pop(){
    if(top<0){
        printf("Empty \n");
        return -1;
    }
    printf("%d popped from stack.\n", STACK[top]);
    return STACK[top--];
}
void display(){
    if (top < 0)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: \n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", STACK[i]);
    }
    printf("\n");
}
int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}