/*
nPr = n!/(n-r)!
*/
#include <iostream>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
ll f[1000011];
void fact()
{
    f[0] = 1;
    for(ll i = 1;i < 1000011;i++)
    {
        f[i] = (f[i-1]%mod * i%mod)%mod;

    }
}
/*
3^3 = 3^2 *  res = 3
3^2 = 3^1 * n = 9
*/
ll exp(ll  n,ll r)
{
    ll res = 1;
    while(r>0)
    {
        if(r%2 == 1)
        {
            r = r-1;
            res = (res%mod * n%mod)%mod;


        }
        else if(r%2 == 0)
        {
            r = r/2;
            n = (n%mod*n%mod)%mod;


        }
    }
    return res;
}
ll farmat(ll n)
{
    return exp(n,mod-2);
}
/*
nPr = n!/(n-r)!
*/
int main()
{
    fact();
    int n,r;
    cin >> n >> r;
    ll fact1 = f[n];
    ll fact2 = f[n-r];
   // cout  << fact1 << " " << fact2 << endl;
    ll res = (fact1 %mod * farmat(fact2)%mod)%mod ;
   
    cout << res << endl;

}