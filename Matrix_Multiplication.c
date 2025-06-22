#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter rows and columns for A: ");
    scanf("%d %d", &m, &n);

    printf("Enter columns for B: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    printf("Enter elements of A:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++)
            C[i][j] = 0;

    // Multiply matrices
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++)
            for(int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Print result
    printf("Multiplication result:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

