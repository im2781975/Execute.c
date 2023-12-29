#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>1;j--)
        {
            if(i>=j)
            {
                cout<<j;
            }
            else
            cout<<"_";
        }
        for(int j=1; j<=n; j++)
        {
            if(i>=j)
            cout<<j;
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}
/* 5
____1    
___212   
__32123  
_4321234 
543212345 */
