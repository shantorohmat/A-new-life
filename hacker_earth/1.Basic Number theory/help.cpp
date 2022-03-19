#include <iostream>
#include <map>
using namespace std;
#define ll long long int
const ll N = 1e6;
ll Isprime[N];
void sieve()
{
    //O(N log log N)
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = i;
    }
    Isprime[0] = 1;
    Isprime[1] = 1;
    for(int i = 2;i <= N;i++)
    {
        if(Isprime[i] == i)
        {
            for(int j = i ; j <= N;j += i)
            {
               
                    Isprime[j] = Isprime[j]/i;
                    Isprime[j] = Isprime[j] * (i - 1);

             
                
            }
        }
    }
    
}
int factors[N];
void divisor()
{
    //O(N log log N)
    for(int i = 0;i <= N;i++)
    {
        factors[i] = 0;
    }
 
    factors[0] = 0;
    factors[1] = 1;
 
    for(int i = 2;i * i <= N;i++)
    {
        if(factors[i] == 0)
        {
            for(int j = i * i;j <= N;j+=i)
            {
                if(factors[j] == 0)
                {
                    factors[j]= i;
                }
            }
 
        }
 
    }
 
    for(int i = 2;i <= N;i++)
    {
        if(factors[i] == 0)
        {
            factors[i] =  i;
        }
    }
}
 
map <int,int> factorize(ll n)
{
    //O(log n)
    map <int,int>res;
    while(n != 1)
    {
        res[factors[n]]++;
        n = n / factors[n];
    }
    return res;
 
}

int main()
{
    // here sieve time complexity O(1)
    // O(1) + O(log N) 
    sieve();
    divisor();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map <int,int> res =  factorize(n) ;
        int prod = 1;
        for(auto i : res)
        {
            prod = prod * (i.second+1);
        }
        int ans = n - Isprime[n] - prod + 1;
        cout << ans << endl;
        
        
    }
 
    
}