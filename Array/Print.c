#include<stdio.h>
int main()
{
    int A[4]={3,2,1};
    int B[ 4 ]={ 10 , 20 , 30};
    int jump=100;
    for(int i=0; i<3;i++){
        jump= A[ i]*2;
            for(int j=0; j<3;j++){
            B [ i]=A[ i] + B[i];
           jump = B[i]/2;
           printf("i->%d, A[%d]->%d, B[%d]->%d, jump->%d\n",i,i,A[i],i,B[i],jump);
        }
        printf("\n");
        A[i]++;
    }
}
