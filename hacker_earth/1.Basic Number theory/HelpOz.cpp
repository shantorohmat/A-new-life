#include <iostream>
#include <set>
using namespace std;
#define ll long long int
ll arr[107];
ll n;
int ok(ll m)
{
    ll z = arr[0] % m;
 
    for(ll i = 0;i < n;i++)
    {
        if(arr[i]%m != z)
            return 0;
    }
    return 1;
}
int main()
{
    
    cin >> n;
    
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    
    ll p = arr[0] - arr[1];
    if(p < 0) p = -1 * p;
    set<ll> s;
 
    for(ll k = 1;k * k < p;k++)
    {
        if(p%k != 0)
            continue;
        
        ll m1 = k;
        ll m2 = p/k;
         
        if(ok(m1) && m1 != 1) s.insert(m1);
        if(ok(m2) && m1 != m2) s.insert(m2);
 
            
      
    }
    for(auto i: s)
        cout << i << " ";
}