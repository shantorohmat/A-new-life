#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;


ll pwr(ll base, ll p, ll mod = MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}

ll modular_inverse(ll n){
    return pwr(n, MOD-2);
}



#define N 1000005
int n, BLOCK, C, arr[N], func[N], cnt[N];
ll curr_value;
ii qarr[N];
// struct query
// {
//     int ff,ss;
// }qarr[N];

inline int getBlock(int pos){
    return (pos-1) / BLOCK;
}

bool comp(ii a, ii b){
    int b1 = getBlock(a.ff);
    int b2 = getBlock(b.ff);
    if(b1 != b2)   return b1 < b2;
    return a.ss < b.ss;
}

inline void remove(int pos){
    if(cnt[arr[pos]] >= 0)
        curr_value = (curr_value * modular_inverse(func[cnt[arr[pos]]])) % MOD;
    cnt[arr[pos]]--;
    if(cnt[arr[pos]] >= 0)
        curr_value = (curr_value * func[cnt[arr[pos]]]) % MOD;
}


inline void add(int pos){
    if(cnt[arr[pos]] >= 0)
        curr_value = (curr_value * modular_inverse(func[cnt[arr[pos]]])) % MOD;
    cnt[arr[pos]]++;
    if(cnt[arr[pos]] >= 0)
        curr_value = (curr_value * func[cnt[arr[pos]]]) % MOD;
}



int main(){

    int q;
    scanf("%d%d%d", &n, &C, &q);

    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
        assert(arr[i] > 0 && arr[i] <= C);
    }

    for(int i=0;i<=n;i++){
        scanf("%d", &func[i]);
        assert(func[i] > 0 && func[i] <= C);
    }

    for(int i=0;i<q;i++){
        scanf("%d%d", &qarr[i].ff, &qarr[i].ss);
        assert(1<=qarr[i].ff && qarr[i].ff<=qarr[i].ss && qarr[i].ss<=n);
    }

    BLOCK = ceil(sqrt(n));
    sort(qarr, qarr+q, comp);

    int left = 1, right = 1;
    cnt[arr[1]] = 1;
    curr_value = 1;
    for(int i=1;i<=C;i++)
        curr_value = (curr_value * func[cnt[i]]) % MOD;

    ll ans = 1;
    for(int i=0;i<q;i++){

        int lo = qarr[i].ff;
        int hi = qarr[i].ss;

        while(left < lo){
            remove(left);
            left++;
        }

        while(left > lo){
            left--;
            add(left);
        }

        while(right < hi){
            right++;
            add(right);
        }

        while(right > hi){
            remove(right);
            right--;
        }

        assert(curr_value > 0);
        ans = (ans * curr_value) % MOD;
    }

    printf("%lld\n", ans);
    return 0;
}

