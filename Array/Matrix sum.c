#include<stdio.h>
int main()
{
    int row,colum, i,j,sum=0;

    printf("Enter row size: ");
    scanf("%d", &row);

    printf("Enter colum size: ");
    scanf("%d", &colum);
    int arr[row][colum];

    for(i=0; i<row; i++){
        for(j=0; j<colum; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<colum; j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
            
    for(i=0; i<row; i++){
        for(j=0; j<colum; j++){
            sum=sum+arr[i][j];
        }
    }
printf("sum is : %d", sum);

    return 0;
}
