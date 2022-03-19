#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
const int mod = 1e9 + 7;
ll gcd(ll a,ll b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
ll modinverse(ll n,ll r)
{
    ll res = 1;
    while(r)
    {
        if(r%2)
        {
            res = (res * n)%mod;
            r--;
        }
        else {
            n = (n * n)%mod;
            r /= 2;
        }
        
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    ll *a = new ll[n];
    for(ll i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    ll res = a[0];
    ll mul = a[0];
    for(ll i = 1;i < n;i++)
    {
        res = gcd(res,a[i]);
        mul = (a[i]%mod) * (mul%mod);
        mul = mul % mod;

    }
    cout << modinverse(mul,res)<< endl;

    
}