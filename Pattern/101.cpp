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
            if(i>n-j+1)
            {
                cout<<"_";
            }
            else
            cout<<j;
        }
        for(int j=1; j<=n; j++)
        {
            if(j>=n-i+2)
            {
                cout<<" ";
            }
            else
            cout<<j;
        }
        cout<<"\n";
    }
}
/*3
32123
_212 
__1  */
