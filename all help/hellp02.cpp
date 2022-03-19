#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll phi(ll n) 
{ 
     //O(sqrt(n))
    
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
int divisor(ll n)
{
    ll ans=1;
    
    for(ll i = 1;i * i <= n;i++){
        if(n%i==0)
        {
            if(n/i==i)
            {
                ans=((ans%mod)*(phi(i)%mod))%mod;
            }
            else
            {
                ans=((ans%mod)*(phi(i)%mod))%mod;
                ans=((ans%mod)*(phi(n/i)%mod))%mod;
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