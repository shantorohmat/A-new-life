#include <iostream>
#include <set>
#include <cstring>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod  = 1000*1000 + 7;
ll frequency[1000*1000];
ll p;
ll modinverse(ll n,ll r)
{
    ll res = 1;
    while(r)
    {
        if(r%2)
        {
            res = (res * n)%p;
            r--;
        }
        else {
            n = (n * n)%p;
            r /= 2;
        }
        
    }
    return res;
}
int main()
{
    memset(frequency,0,sizeof(frequency));
    ll n;
    cin >> n >> p;
    set<ll>s;
    map<ll,ll>M;
 
    for(ll i = 0;i < n;i++)
    {
        ll h ;
        cin >> h;
        h = h%p;
        M[h]++;
        s.insert(h);
 
    }
    ll ans = 0;
    for(auto i:M)
    {
        if(i.first == 0) continue;
        int x = i.first;
        int y = modinverse(x,p-2);
        if(x != y)
        {
            if(s.count(x) && s.count(y))
            {
                if(x < y) ans += max(M[x],M[y]);

            }
            else{
                ans += i.second;
            }
        }

    }
    cout << ans+M[0]<< endl;
    
  
    
}