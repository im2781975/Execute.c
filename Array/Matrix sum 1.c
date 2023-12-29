#include <stdio.h>
int main() {
    int r, c;

    printf("ENTER THE NUMBER OF ROWS AND COLUMNS: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], C[r][c];
    printf("ENTER THE ELEMENTS FOR A MATRIX:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("ENTER THE ELEMENTS FOR B MATRIX:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Sum is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
