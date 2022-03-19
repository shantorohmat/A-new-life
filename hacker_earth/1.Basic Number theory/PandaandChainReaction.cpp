#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int
const ll mod = 1000*1000+3;
ll result[1000*1000+7];

int main()
{
   
    result[0] = 1;
    for (int i = 1; i <= mod; ++i) {
         result[i] = ((i%mod) * (result[i - 1]%mod)) % mod;
    }
 
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        if(n>mod)
            cout<<0<<endl;
        else
            cout << (result[n]%mod * x%mod) % mod << endl;
      
 
       
        
    }
}