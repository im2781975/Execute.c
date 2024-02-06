#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                a+=arr[i][j];
            }
            if(j==n-i-1)
            {
                b+=arr[i][j];
            }
        }
    }
    cout<<abs(b-a);
}
