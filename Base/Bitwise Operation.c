#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d\n%d\n%d",n&x,n|x,n^x);
}
