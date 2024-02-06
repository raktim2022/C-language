// Write a menu driven program to perform the following operations on a singly linked list.c.Create
//     d.Insert
//         e.Delete
//             f.Display
//                 g.Exit.

#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if(head == NULL)
            head = new_node;
        else{
            struct node *temp = head;
            while(temp->next != NULL)
            temp = temp->next;
            temp->next = new_node;

        }
    }
}

void insert(){
    int data, pos;
    printf("Enter the data to insert: ");
    scanf("%d", &data);
    printf("Enter the position to insert at: ");
    scanf("%d", &pos);
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if(pos==1){
        new_node->next = head;
        head = new_node;
    }
    else{
        struct node *temp = head;
        for (int i = 1;i<=pos-1;i++){
            temp=temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void delete(){
    int pos;
    printf("Enter the position to delete from: ");
    scanf("%d", &pos);
    if(pos==1)
    {
        head=head->next;
    }
    else{
        struct node *temp = head;
        for (int i = 1; i < pos-1;i++){
            temp=temp->next;
        }
        temp->next = temp->next->next;
    }
}
void display(){
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int choice;
    while (1)
    {
        printf("1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete ();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}