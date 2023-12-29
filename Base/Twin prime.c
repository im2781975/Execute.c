#include<bits/stdc++.h>
using namespace std;
bool divisor(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int x=n+2;
    int y=n-2;
    if(divisor(x)==1)
    {
        cout<<x;
    }
    else if(divisor(y)==1)
    {
        cout<<y;
    }
    else
    {
        cout<<"No";
    }
}
/* find twin prime number
37
No */p
