#include <iostream>
using namespace std;
const int N = 1e6 ;
int Isprime[N];
int prime[N];
void sieve()
{
    for(int i = 0; i < N;i++)
    {
        Isprime[i] = 0;
    }
    Isprime[0] = 1;
    Isprime[1] = 1;
    for(int i = 2;i * i <= N;i++)
    {
        if(Isprime[i] == 0)
        {
            for(int j = i * i ;j <= N;j += i)
            {
                if(Isprime[j] == 0)
                {
                    Isprime[j] = i;
                    prime[i]++;
                }
                
            }
        }
    }
    for(int i = 2;i <= N;i++)
    {
        if(Isprime[i] == 0)
        {
            Isprime[i] = i;
            prime[i]++;
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << prime[n]   << endl;

    }
}