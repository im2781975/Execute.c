#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == 1) 
                cout << i << " ";
            else if(j == n)
                cout << n - i << " ";
            else if(i == 1 || i == n)
                cout << "+";
            else if(i == (n/2) + 1 && j == (n/2) + 1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
/* 6
1 ++++5 
2     4 
3     3 
4   * 2 
5     1 
6 ++++0  */
