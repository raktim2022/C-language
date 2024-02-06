// Write a program to implement Tower Of Hanoi problem.

#include <stdio.h>
void towerOfHanoi(int numDisks, char A, char B, char C)
{
    if (numDisks == 1)
    {
        printf("Move disk 1 from %c to %c\n", A, C);
        return;
    }
    towerOfHanoi(numDisks - 1, A, C, B);
    printf("Move disk %d from %c to %c\n", numDisks, A, C);
    towerOfHanoi(numDisks - 1, B, A, C);
}

int main()
{
    int numDisks;

    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
