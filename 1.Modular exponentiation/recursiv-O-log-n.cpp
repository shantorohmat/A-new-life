#include <iostream>
using namespace std;
const int mod = 1e7+7;
int recursive(int n,int r)
{
    if(r == 0) 
    return 1;
    else if(r%2) // odd
    {
        return  (n * recursive((n*n)%mod,(r-1)/2)) % mod;
    }
    else // even
    {
        return recursive((n*n)%mod,r/2);
    }
}
int main()
{
    int n,r;
    // n ^ (r) = n * n * n .... (r times)

    cin >> n >> r;

    cout << recursive(n,r);
}