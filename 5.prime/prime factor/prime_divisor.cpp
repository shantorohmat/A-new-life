#include <iostream>
using namespace std;
const int N = 1e7+7;
int Isprime[N];
void sieve()
{
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = i;
    }

    for(int i = 2;i * i <= N;i++)
    {
        if(Isprime[i] == i)
        {
            for(int j = i * i;j <= N;j += i)
            {
                if(Isprime[j] == j)
                    Isprime[j] = i;
            }
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
        cout << Isprime[n] << endl;
    }
}