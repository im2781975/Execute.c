#include <stdio.h>

int main() {
    int r = 3, c = 4;
    int arr[r + 2][c + 2];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 && j != c - 1) {
                printf("%d ", arr[i][j]);
            }

            if (j == c - 1 && i != r - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = c - 1; j >= 0; j--) {
            if (i == r - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == r - 2 && j != c - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
