#include <stdio.h>

int main() {
    int n, k;
    printf("Enter digits: ");
    scanf("%d%d", &n, &k);
    int x = n - k;
    if(x>0)
    {
    switch (x) {
        case 1:
            printf("Diffrence less than or equal to 5");
            break;
        case 2:
            printf("Diffrence less than or equal to 5");
            break;
        case 3:
            printf("Diffrence less than or equal to 5");
            break;
        case 4:
            printf("Diffrence less than or equal to 5");
            break;
        case 5:
            printf("Diffrence less than or equal to 5");
            break;
        
        default:
                printf("x is greater than 5");
            }
    }
    else
    printf("__");

    return 0;
}
