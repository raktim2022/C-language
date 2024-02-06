// Write a program to display FIBONACCI series and FACTORIAL of a number using recursion.

#include<stdio.h>
int fibo(int n){
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
}
int fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;

    // Input the number to calculate the Fibonacci series and factorial
    printf("Enter a number: ");
    scanf("%d", &n);

    // Displaying Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");

    // Calculating and displaying factorial
    printf("Factorial of %d is: %d\n", n, fact(n));

    return 0;
}