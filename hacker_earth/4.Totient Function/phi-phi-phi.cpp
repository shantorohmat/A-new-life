#include <iostream>
using namespace std;
const int N = 1e6;
const int mod = 1e9+7;
#define fastIO ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
typedef long long int ll;
ll phi[N];

ll phi_1_n(ll n)
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
int main()
{
    fastIO;
    ll n;
    cin >> n;
    ll k;
    cin>> k;
    ll x = n ;
    for(int i = 0;i < k;i++)
    {
        
        x = phi_1_n(x);
        
        
    }
    cout << x << endl;
    
}