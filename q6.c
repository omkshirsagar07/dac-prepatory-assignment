#include <stdio.h>

void multiplyMatrices(int first[][10], int second[][10], int result[][10], int m, int n, int p) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int m, int p) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &n, &p);

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    multiplyMatrices(A, B, C, m, n, p);

    printf("\nResultant matrix (C):\n");
    displayMatrix(C, m, p);

    return 0;
}
