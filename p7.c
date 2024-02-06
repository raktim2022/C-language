// Write a program to search an element using Binary Search algorithm.

#include<stdio.h>
int main(){
    int size, key;
    printf("Array size");
    scanf("%d",&size);
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
    printf("\n Enter the element to search for: ");
    scanf("%d", &key);
    int search = binarySearch(a, size, key);
    if (search != -1)
    {
        printf("Search found");
    }
}

int binarySearch(int a[],int size,int key){
    int left = 0;
    int right = size;
    int mid;
    while (left<=right)
    {
        int mid = (left + right) / 2;
        if(a[mid]==key)
            return mid;
        if(a[mid]<key)
            left = mid + 1;
        if(a[mid]>key)
            right = mid - 1;
    }
    return -1;
}