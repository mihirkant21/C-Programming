#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of matrix:\n");
    int zeroCount = 0;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            if(A[i][j] == 0)
                zeroCount++;
        }

    int totalElements = m * n;

    if(zeroCount > totalElements / 2)
        printf("Matrix is sparse.\n");
    else
        printf("Matrix is not sparse.\n");

    return 0;
}
