#include<stdio.h>

int main()
{
    int x,n;
    float sum;
    scanf("%d",&n);
    if(n<=50)
    {
        sum=n*(.50);
    }
    else if(n>50 && n<=150)
    {
        x=n-50;
        sum+=50*(.50)+x*(0.75);
    }
    else if(n>150 && n<=250)
    {
        x=n-150;
        sum+=50*(.50)+100*(0.75)+x*(1.20);
    }
    else
    {
        x=n-250;
        sum+=50*(.50)+100*(0.75)+100*(1.20)+x*(1.50);
    }
    sum=(sum*.20)+sum;
    printf("%.2f",sum);
}
