#include <iostream>
#include <string>
#include<cstdio>
#include<cstring>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
ll f[1000011];
void fact()
{
    f[0] = 1;
    int i = 1;
    while(i < 1000011)
    {
        f[i] = f[i-1] * i;
        f[i] = f[i] % mod;
        i++;
    }
}
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

ll modinverse(ll a)
{
    ll zx = exp(a,mod-2);
    return zx;

}
int main()
{
    fact();
    ll t;
    scanf(" %d",&t);
    while(t--)
    {
        char s[1000011];
        scanf(" %s",s);
        int len = strlen(s);
        ll cnv = 0;
        ll cnc = 0;
        
        ll freq[30] = {0};
        for(ll i = 0;i < len;i++)
        {
            freq[s[i] - 'a']++;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                //cout << s[i] ;
                cnv++;
                
            }
            else 
            {
                cnc++;
                
            }
            
        }
        

        int pos = cnc+1 - cnv;
        if(pos < 0)
        {
            cout << -1 << endl;
         

        }            
        else
        {
            ll ans1 = f[cnc];


            ll ans2 =  f[cnc + 1] * modinverse(f[pos]); 
            ans2 = ans2 % mod;
            for(int i = 0;i < 26;i++)
            {
                int temp = i + 'a';
                if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
                {
                    ans2 = ans2 * modinverse(f[freq[i]]);
                    ans2 = ans2%mod ;
                    
                }
                else {
                    ans1 = ans1 * modinverse(f[freq[i]]);
                    ans1 = ans1%mod;
                    
                }
            }
            cout <<  (ans1 * ans2) % mod << endl;
            
        }
        
    }
    return 0;
}