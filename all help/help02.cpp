#include <iostream>
#include <set>
#include <climits>
using namespace std;
#define ll long long int
const ll N = 1000000;
ll Isprime[N+1];
void sieve()
{
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = -1;
    }
   
 
    for(int i = 2;i <= N;i++)
    {
        if(Isprime[i] == -1)
        {
            for(int j = i ;j <= N;j+=i)
            {
                if(Isprime[j] == -1)
                Isprime[j] = i;
            }
 
        }
        
 
    }
}
// set<int>factor(ll n)
// {
//     set<int>res;
 
//     while(n != 1)
//     {
//         res.insert(Isprime[n]);
//         n = n / Isprime[n];
//     }
//     return res;
// }
int main()
{
    
    ios_base::sync_with_stdio(false);

    cin.tie(NULL); cout.tie(NULL);
    
    sieve();
    
    //  for(int i = 0;i <= N;i++)
    // {
    //     Isprime[i] = -1;
    // }
   
 
    // for(int i = 2;i <= N;i++)
    // {
    //     if(Isprime[i] == -1)
    //     {
    //         for(int j = i ;j <= N;j+=i)
    //         {
    //             if(Isprime[j] == -1)
    //             Isprime[j] = i;
    //         }
 
    //     }
        
 
    // }
    ll n,t;
    cin >> t;
    while(t--)
    {
        
        cin >> n;
        cout << n - Isprime[n] << "\n";
      
 
    }
}
