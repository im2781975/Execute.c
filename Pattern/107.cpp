#include <iostream>
using namespace std;

int divisor(int n, int &x, int sum) {
    while (n != 0) {
        x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum;
}

int main() {
    int n, x, y = 0, sum = 0;
    cin>>n;
    int m = divisor(n, x, sum);
    if(m % 10 > 1) {
        y = divisor(m, x, sum);
    }
    cout<<y;
    return 0;
}
/*789
7+8+9=24
2+4=6 */
