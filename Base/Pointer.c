#include <stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *pa=&a,*pb=&b;
    printf("%d\n%d",(*pa+*pb),abs(*pa-*pb));
}
