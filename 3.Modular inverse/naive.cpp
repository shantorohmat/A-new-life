#include <iostream>
using namespace std;
int modinverse(int a,int m)
{
    a = a%m;
    for(int b = 1;b < m;b++)
    {
        if((a*b)%m == 1)
        {
            return b;
        }
    }
    return -1;
}
int main()
{
    int a,m;
    cin >> a >> m;
    // (a*b^(-1))%mod = (a*x)%mod = (a%mod * x%mod) % mod  where x > 1 and x < m

    cout << modinverse(a,m) << endl;  // we are here find the value of x
}