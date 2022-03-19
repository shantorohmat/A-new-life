#include <iostream>
#include <vector>
using namespace std;
const int N = 1e9+7;
bool Isprime[N];

void sieve()
{
    for(int i = 0;i <= N;i++)
    {
        Isprime[i] = 0;
    }
    Isprime[0] = 1;
    Isprime[1] = 1;
    for(int i = 2 i * i <= N;i++)
    {
        if(Isprime[i] == 0){
            for(int j = i * i; J <= N;j += i)
            {
                if(Isprime[j] == 0)
                Isprime[j] = 1;

            }
        }
    }

    for(int i = 2;i <= N;i++)
    {
        if(Isprime[i] == 0)
            Isprime[i] = i;
    }
}
int main()
{
    sieve();
    int n;
    cin >> n;
    vector <int> v(2*N,-1),v2(2)

}