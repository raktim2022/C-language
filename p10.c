// Write a program to sort an array using Bubble sort

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the array size: \n");
    scanf("%d", &size);
    int a[size];
    printf("Enter the array elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", a[i]);
    }
    bubblesort(a, size);
    displayArray(a, size);
}
void bubblesort(int a[], int size)
{
    int i, j,temp;
    for (i = 0; i < size-1; i++)
    {
        for (j = 0; j < size-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void displayArray(int arr[], int size)
{
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
