#include<stdio.h>
int main()
{
    int n,x;
    int sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        n/=10;
        sum+=x;
    }
    printf("%d",sum);
}
