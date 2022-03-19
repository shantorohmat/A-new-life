#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define endl "\n";
#define fastIo ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;

const ll mod = 1e9+7;

typedef set<ll> sets;
 
sets s;
ll phi(ll n)
{
    
    ll ans = n;
    for(ll i = 2;i * i <= n;i++)
    {
        if(n%i == 0)
        {
            ans = ans/ i;
            ans = ans * (i-1);

            while(n%i == 0)
            {
               
                n = n / i;

            }
        }
        
    }
    if(n>1)
    {
        ans = ans/n;
        ans = ans * (n - 1);
    }
    return ans%mod;
}

ll divisor(ll n)
{
    ll sum = 1;
    for(ll i = 1;i <= sqrt(n);i++ )
    {
        if(n%i == 0)
        {
            if(n/i == i)
            {
                sum = ( sum % mod * phi(i) % mod ) % mod;
            }
            else 
            {
                sum = ( sum % mod * phi(i) % mod ) % mod;
                sum = ( sum % mod * phi(n/i) % mod ) % mod;

            }
 
        }
       
        
    }
    return sum;
    
}
 
int main()
{
    fastIo;
    ll n;
    cin >> n;
    ll s = divisor(n);
    cout << s << endl;
  
 
}