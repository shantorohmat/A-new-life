#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>

//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;

using namespace std;


 

#define F              first

#define S              second

#define int             long long int

#define ll              int

#define pb              push_back

#define mp              make_pair

typedef pair<int, int>  pii;

typedef pair<ll, ll>    pl;

typedef vector<int>     vi;

typedef vector<ll>      vl;

typedef vector<pii>     vpii;

typedef vector<pl>      vpl;

typedef vector<vi>      vvi;

typedef vector<vl>      vvl;

#define mii             map<int,int>

#define pqb             priority_queue<int>

#define pqs             priority_queue<int,vi,greater<int>>

#define setbits(x)      __builtin_popcountll(x)

#define zrobits(x)      __builtin_ctzll(x)

#define mod             1000000007

#define inf             1e18

#define ps(x,y)         fixed<<setprecision(y)<<x

#define mk(arr,n,type)  type *arr=newtype[n];

#define w(x)            int x; cin>>x; while(x--)

#define si(x)   scanf("%d",&x)

#define sl(x)   scanf("%lld",&x)

#define ss(s)   scanf("%s",s)

#define fo(i,n) for(int i=0;i<n;i++)

#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

#define all(x) x.begin(), x.end()

#define clr(x) memset(x, 0, sizeof(x))

#define sortall(x) sort(all(x))

#define MODULO(a,b) ((a>=0)?(a%b):((b+a)%b))

#define tr(it, a) for(auto it =a.begin(); it !=a.end(); it++)

// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


 

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

/*NcR*/

// int NcR(int n, int r)

// {

//     int p = 1, k = 1;

//     if (n - r < r)

//         r = n - r;

//     if (r != 0) {

//         while (r) {

//             p *= n;k *= r;

//             int m = __gcd(p, k);

//             p /= m;k /= m;

//             n--;r--;

//         }

//     }

//     else{

//         p = 1;

//     }

//         return p;


 

// }

/*NcR*/

/*Fibonacci Series*/

map<int, int> fib;

int f(int n) {//n>=2 && n->0-indexed

    if (fib.count(n)) return fib[n];

    int k=n/2;

    if (n%2==0) { // n=2*k

        return fib[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % mod;

    } else { // n=2*k+1

        return fib[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % mod;

    }

}

/*Fibonacci Series*/


 

// int toInt(string s){

//     string streamobj(s);

//     int x=0;

//     obj>>x;

//     return x;

// }

/*Sieve Of Eratosthenes*/

int NN=1000000;

bool prime[1000*1000 + 7];

vi primes_v;

void SieveOfEratosthenes(){

memset(prime,true,sizeof(prime));

for(int p=2;p*p<=NN;p++){//or p<=N;

    if(prime[p]==true){

        for(int i=p*p;i<=NN;i+=p)

        prime[i]=false;

    }

}

}

/*Sieve Of Eratosthenes*/

/*Reserved Variable

NN,fib,prime,toInt,f,NcR,primes_v

*/

/*********************************************************************************************************************************/


 

int GCD(int a,int b){

    if(b==0)

    return a;

    return GCD(b,a%b);

}

int x=0,y=0,d=1;


 

void ExtendedEuclid(int a,int b){

    if(b==0){

        x=1;

        y=0;

        d=a;

        return ;

    }

    ExtendedEuclid(b,a%b);

    int cx=y;

    int cy=x-(a/b)*y;

    x=cx;

    y=cy;

    //cout<<x<<" "<<y<<"\n";

}

int InverseModulo(int a,int m){

    if(GCD(a,m)!=1)

    return -1;

    x=0;

    y=0;

    ExtendedEuclid(a,m);

    return (x+m)%m;

}
 int freq[1000*1000+7];

void solve()

{

    //SieveOfEratosthenes();

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    memset(freq,0,sizeof(freq));

    int n,p;

    cin>>n>>p;

    int h;

    for(int i = 0;i < n;i++){

    cin>>h;

    freq[h%p]++;

    }

    int ans=0;

    /*cout<<"check\n";

    int x=InverseModulo(4,5);

    cout<<x;*/

    for(int i = 1;i < p;i++){

      
        if(freq[i]==0)
        continue;

        x=0,y=0;

        int inv=InverseModulo(i,p);//(x,p) --> y  :: x * y 

        x=0,y=0;

        if(freq[inv]==0)
            ans+=freq[i];

        else{

          if(inv!=i){

                ans+=max(freq[inv],freq[i]);

                freq[inv]=0;
                

                //freq[i]=0;

          }

        }

    }

    cout<<ans;

    


 

}


 

int32_t main()

{

    solve();

    return 0;

}