#include <stdio.h>

int main() {
    int n, i, j;
    printf("size: ");
    scanf("%d", &n);
    int arr[n + 2];
    printf("Elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("output: ");
    for (i = 0; i < n; i++) {
        int flag = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
