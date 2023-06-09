#include <stdio.h>

void printMatrix(int (*arr)[3], int rows) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(arr[i] + j));
        }
        printf("\n");
    }
}

int main() {
    int i, j, arr[3][3];
    int (*pArr)[3] = arr; // pointer to array of 3 integers

    // input elements of the matrix
    printf("Input elements in 3x3 matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // print elements of the matrix
    printf("\nElements of 3x3 matrix: \n");
    printMatrix(pArr, 3);

    return 0;
}
