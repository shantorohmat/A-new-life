#include <iostream>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
ll binExp(ll n,ll r)
{
    ll res = 1;
    while(r > 0)
    {
        if(r & 1)
        {
            res = (res%mod * n%mod)%mod;
        }
            n = (n%mod * n%mod)%mod;
            r >>= 1;
    }
    return res;
}

void sol()
{
    //1/2^(n-1)
    ll n;
    cin >> n;
    ll ans = binExp(2,n-1);//ans = 2^(n-1)
    ans = binExp(ans,mod-2);//ans = (ans)^(-1)
    cout <<ans <<  endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        sol();
    }
}