#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;

    printf("Enter the values: ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float a = sqrt ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    float b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    float c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

    if (a + b > c && b + c > a && c + a > b)
    {

        if (a == b && b == c)
        {
            printf("Equilateral ");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles ");
        }
        else
        {
            printf("Scalene ");
        }

        if (a * a + b * b == c * c || b * b + c * c == a * a ||c * c + a * a == b * b)
        {
            printf("right Triangle\n");
        }
        else if (a * a + b * b> c * c || b * b + c * c > a * a ||c * c + a * a > b * b)
        {
            printf("acute Triangle\n");
        }
        else
        {
            printf("obtuse Triangle\n");
        }
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}
