// Write a program to implement Matrix multiplication.
#include <stdio.h>
#define row 3
#define column 3
void multiplicationMatrix();
int main(){
    int mat1[row][column] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[row][column] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int resultMatrix[row][column];
    multiplicationMatrix(mat1, mat2, resultMatrix);
}
void multiplicationMatrix(int mat1[][column],int mat2[][column],int resultMatrix[][column]){
    int i = 0, j = 0, k = 0;
    for(int i = 0; i <row; i++){
        for(j = 0; j <column; j++){
            resultMatrix[i][j] = 0;
            for(k = 0; k <column; k++){
                resultMatrix[i][j] += mat2[k][j]*mat1[i][k];
            }
        }
    }
    display(resultMatrix);
}
void display(int resultMatrix[][column]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d \t", resultMatrix[i][j]);
        }
        printf("\n");
    }
}