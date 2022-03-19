#include <iostream>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
ll power(ll n,ll r)
{
    //n^r
    ll res = 1;
    while(r > 0)
    {
        if(r%2 == 1)
        {
            r = r - 1;
            res = (res%mod * n%mod)%mod;
        }
        if(r%2 == 0)
        {
            r = r / 2;
            n = (n%mod * n%mod)%mod;
        }
    }
    return res;
}
int main()
{
    ll a,b,res = 0;
    cin >> a >> b;
    cout << power(a,b)%mod << endl;
}