#include <stdio.h>
int arr[], int size)
{
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] <= arr[j])
                break;
        }
        if (j == size)
            printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printLeaders(arr, n);

    return 0;
}
