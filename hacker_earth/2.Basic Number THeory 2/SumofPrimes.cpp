#include <iostream>
#include <vector>
using namespace std;
const int N = 1000004;
const int mod = 1e9+7;
#define ll long long int
ll Isprime[N];
ll sum[N];
void sieve()
{
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = 0;
    }
    Isprime[0] = 1;
    Isprime[1] = 1;

   for(int i = 2;i * i <= 1000000;i++)
   {
       if(Isprime[i] == 0)
       {
           for(int j = i * i;j <= 1000000;j += i)
           {
               Isprime[j] = 1;
           }
       }

   }

   //....................................................................


    for(int i = 0;i <= N;i++)
    {
        sum[i] = 0;
    }

    for(int i = 2;i <= 1000000;i++)
    {
        if(Isprime[i] == 0)
        {
            sum[i] = i + sum[i-1];
        }
        else{
            sum[i] =  sum[i-1];
        }
    }
    //......................................................................

}
void sol()
{
    ll l,r;
    cin >> l >> r;
    cout << sum[r] - sum[l-1] << endl ;

}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(0);

    cout.tie(0);

    sieve();

    ll t;
    cin >> t;
    while(t--)
    {
        sol();
    }
}