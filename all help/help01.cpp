#include <bits/stdc++.h>

 

using namespace std;

 

#define N 100002

#define MOD 1000000007

#define fo(i, b, n) for (long i = b; i < n; ++i)

#define rfo(i, b, n) for (long i = b; i >= n; --i)

#define all(ar) ar.begin(), ar.end()

#define rall(ar) ar.rbegin(), ar.rend()

#define mem(ar, val) memset(ar, (val), sizeof(ar))

#define fi first

#define se second

#define pb push_back

#define deb(x) cout << #x << '=' << x << endl;

#define deb2(x, y) cout << #x << '=' << x << ', ' << #y << '=' << y << endl;



 

typedef long long ll;

typedef pair<int, int> pii;

typedef pair<ll, ll> pll;

typedef vector<int> vi;

typedef vector<ll> vll;

typedef vector<bool> vb;

typedef vector<vb> vvb;

typedef vector<vi> vvi;

typedef vector<vll> vvll;
 

const double PI = 3.1415926535897932384626;

const ll oo = 1e18;

 



ll binPow(ll n,ll r)
{
    ll res = 1;
    while(r>0)
    {
        if(r%2)
        {
            res =(res * n) % MOD;
            r--;
        }
        else {
            r /= 2;
            n = (n*n) % MOD;
        }
    }
    return res;
}

 

ll n, inv2;

 

ll choose2(ll l)

{

    l %= MOD;

    ll t1 = (l * (l + 1)) % MOD;

    return (t1 * inv2) % MOD;

}


 

void solution()

{

    cin >> n;

    ll res = 0, v = 1;

 

    while (v * v <= n)

    {

        ll cnt = n / v;

        res = (res + v * choose2(cnt)) % MOD;

        ++v;

    }

 

    v = n / v;

    while (v > 0)

    {

        ll v1 = (n / v), v2 = (n / (v + 1));

        ll cnt = (choose2(v1) - choose2(v2) + 10ll * MOD) % MOD;

        res = (res + choose2(v) * cnt) % MOD;

        v--;

    }

    cout << res % MOD;

}

 

int main()

{

    long t = 1;

    inv2 = binPow(2, MOD - 2);

    // cin >> t;

    while (t--)

    solution();

    return 0;

}