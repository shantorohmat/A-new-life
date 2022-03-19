#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int
#include <math.h>
const ll mod = 1e9+7;
ll exponentiation(ll n,ll r)
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
    return res%mod;
}

int main()
{

    ll n;
    ll t;
    cin >> t;
    while(t--){
    cin >> n;
    cout << exponentiation(2,n)-1<< endl;
    
    
    }
}