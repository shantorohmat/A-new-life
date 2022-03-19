#include <iostream>
#include <set>
using namespace std;
#define ll long long int
const ll N = 1e6;
ll Isprime[N];
void sieve()
{
    //O(N log log N)
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = 0;
    }

    Isprime[0] = 0;
    Isprime[1] = 1;

    for(int i = 2;i * i <= N;i++)
    {
        if(Isprime[i] == 0)
        {
            for(int j = i * i;j <= N;j+=i)
            {
                if(Isprime[j] == 0)
                {
                    Isprime[j]= i;
                }
            }

        }

    }

    for(int i = 2;i <= N;i++)
    {
        if(Isprime[i] == 0)
        {
            Isprime[i] =  i;
        }
    }
}

set <int> factorize(ll n)
{
    //O(log n)
    set <int>res;
    while(n != 1)
    {
        res.insert(Isprime[n]);
        n = n / Isprime[n];
    }
    return res;

}
int totient(int n)
{
    // time complexity O(log N)
     set <int> res =  factorize(n) ;
        for(auto i : res)
        {
            int j = i - 1;
            n = n * j;
            n = n /i;
           //  ϕ(N) = N  * { (("prime1" −𝟏)/"prime1" ) + ....+}

            //cout << n << endl;
        }
        return n;

}

int main()
{
    // here sieve time complexity O(1)
    // O(1) + O(log N) 
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int n,ans = n,k = 1;
        cin >> n;
        int etf = totient(n);
        cout << etf << endl;
       
    }

    
}