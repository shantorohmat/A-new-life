#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define endl "\n";
#define fastIo ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
const ll N = 1e6+8;
const ll mod = 1e9+7;
ll phi[N];
ll Isprime[N];
typedef set<ll> sets;

sets s;
void phi_1_n()
{
    for(ll i = 0;i <= N;i++)
    {
        phi[i] = i;
    }

    for(ll i = 2;i <= N;i++)
    {
        if(phi[i] == i)
        {
            for(ll j = i;j <= N;j += i)
            {
                phi[j] = phi[j]/i; // n/prime where i == prime && phi[j] = n
                phi[j] = (phi[j] % mod * (i - 1) % mod)%mod; // // {n * (prime-1)}/prime = (n/prime) * (prime-1)
            }
        }
    }
}
int divisor(ll n)
{
    ll ans=1;
    
    for(ll i = 1;i * i <= n;i++){
        if(n%i==0)
        {
            if(n/i==i)
            {
                ans=((ans%mod)*(phi[i]%mod))%mod;
            }
            else
            {
                ans=((ans%mod)*(phi[i]%mod))%mod;
                ans=((ans%mod)*(phi[n/i]%mod))%mod;
            }

        }
    }
    return ans;
}
int main() 
{ 
 
    ll n;
    cin>>n;
    cout << divisor(n);
    return 0; 
} 