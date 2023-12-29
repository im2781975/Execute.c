#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((j==0 || j==n-1)||(i%2!=0 && j%2!=0 && i<=n/2 )||(i%2==0 && j%2==0 && i<=n/2  && i!=0))
                cout<<"*";
            else 
            cout<<" ";
        }cout<<"\n";
    }
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || (i == j || j == n - 1 - i) && i < n / 2)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
