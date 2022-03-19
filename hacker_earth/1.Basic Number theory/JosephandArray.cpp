#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <map>

using namespace std;

#define ll long long int



const ll  siz =2e6+5;

const ll  mod =1e9 + 7;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll fact[siz];
ll invmod[siz];
ll lp[siz];
ll a[siz];
map<int,int>cnt;

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
    return res%mod;
}


ll fermat(ll a)

{
    return exp(a,mod-2);

}



void f()

{
    fact[0] = 1;
    invmod[0] = 1;

    for(ll i=1;i<=siz;i++)

    {

        fact[i]=(i*fact[i-1])%mod;

        invmod[i]=fermat(fact[i]);

    }

}
ll nCr(ll n,ll r)
{
    /*
    nCr = n!/((n-r)! * r!)
    */
   if(n < r) return 0;
    ll res = ((fact[n] * invmod[r])%mod * invmod[n-r])%mod;
    return res;
}





int main()

{
    fast;
    f();
    clock_t start = clock();

    for (int i = 2;i <= 2e6;i++)
        if (!lp[i])
            for (int j = i;j <= 2e6;j += i)
                if (!lp[j])
                {
                    lp[j] = i;
                    cout << lp[j] << " ";
                }
                cout << endl;

    

    ll n,m;

    cin>>n>>m;

    for(ll i=1;i<=n;i++)

    {

        cin>> a[i];

        while(a[i] > 1)
        {
            int x = lp[a[i]];
            while(a[i] % x == 0) 
            {
                cnt[x]++;
                a[i] /= x;
            }
        }

    }

    int ans = 1;
    for (auto i : cnt) ans = (ans* nCr(i.second + m - 1, m - 1))%mod; 
 
    //cout << ans << endl;
    double duration = ((double) clock() - start) / (double) CLOCKS_PER_SEC;
    //cout << "Time: " << fixed << setprecision(10) << duration << endl;
    return 0;

}

    