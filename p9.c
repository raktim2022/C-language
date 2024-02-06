// Write a program to sort an array using Selection sort
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
    selectionsort(a, size);
    displayArray(a, size);
}
void selectionsort(int a[],int size){
    int i, j, min, temp;
    for(i=0;i<size;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(a[j]<a[min])
                min = j;
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
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
