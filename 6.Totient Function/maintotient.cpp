#include <iostream>
using namespace std;
const int N = 1000005;
int Isprime[N];
void sieve()
{
    //O(N log log N)
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = i;
    }
    Isprime[0] = 0;
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
int main()
{
    //time complexity O(1)
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << Isprime[n];
    }

}