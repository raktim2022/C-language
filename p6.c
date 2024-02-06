// Q12.Write a program to search an element using Linear Search algorithm.

#include<stdio.h>
int main(){
    int size,key;
    printf("Enter the array size: \n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: \n");
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    printf("The elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n Enter the element to search for: ");
    scanf("%d", &key);
    int search = linearSearch(a, size, key);
    if (search != -1)
    {
        printf("Search found");
    }
    
}
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if element not found
}