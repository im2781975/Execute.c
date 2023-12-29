#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=c-1; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
#include<stdio.h>
#include<math.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            int tmp=arr[0][j];
            arr[0][j]=arr[r-1][j];
            arr[r-1][j]=tmp;
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
