// Write a program of implementation of the following functions in an array:
// a) Insert an element into a specific position.
// b) Delete an element from a specific position

#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[], int *size, int element, int position)
{
    if (*size >= MAX_SIZE)
    {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
    if (position < 0 || position > *size)
    {
        printf("Invalid position. Cannot insert element.\n");
        return;
    }
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

void deleteElement(int arr[], int *size, int position)
{
    if (*size <= 0)
    {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }
    if (position < 0 || position >= *size)
    {
        printf("Invalid position. Cannot delete element.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void displayArray(int arr[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[MAX_SIZE];
    int size = 0;

    insertElement(arr, &size, 10, 0); // Insert 10 at position 0
    insertElement(arr, &size, 20, 1); // Insert 20 at position 1
    insertElement(arr, &size, 30, 1); // Insert 30 at position 1

    printf("After insertion:\n");
    displayArray(arr, size);

    deleteElement(arr, &size, 1); // Delete element at position 1

    printf("After deletion:\n");
    displayArray(arr, size);

    return 0;
}
