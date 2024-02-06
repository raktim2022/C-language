// Write a program to sort an array using Insertion sort
#include<stdio.h>
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
    inerstionsort(a, size);
    displayArray(a, size);
}
void inerstionsort(int a[], int size){
    int i, key, j;
    for (i = 1;i<size;i++){
        key = a[i];
        j = i - 1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
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
