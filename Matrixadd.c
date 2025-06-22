#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], C[m][n];

    printf("Enter elements of A:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    // Add matrices
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    // Print result
    printf("Sum of matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
