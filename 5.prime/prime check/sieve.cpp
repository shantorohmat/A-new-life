#include <iostream>
using namespace std;
const int N = 1e6+7;
int Isprime[N];

void sieve()
{
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = true;
    }

    Isprime[0] = false;
    Isprime[1] = false;

    for(int i = 2;i * i <= N;i++)
    {
        if(Isprime[i] == true)
        for(int j = i * i;j <= N;j += i)
        {
            if(Isprime[j] == true)
            Isprime[j] = false;
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