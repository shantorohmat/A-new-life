#include <iostream>
#include <vector>
using namespace std;
const int N = 1e7+7;
int Isprime[N];
//There is no different between usingsieve and usingsieve_vec.

void sieve()
{
    //O(N log log N)
   
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
                }
                
            }
        }
    }
    for(int i = 2;i <= N;i++)
    {
        if(Isprime[i] == 0)
        {
            Isprime[i] = i;
        }
    }
}
vector<int> factorize(int n) 
{
    //O(log N)
    vector<int> res;
    while (n != 1) 
    {
        res.push_back(Isprime[n]);
        n /= Isprime[n];
    }
    return res;
}
int main()
{
    //O(log N)
    // sieve() here working like a pre array. o(1)
    //O(1) + O(log N)
    sieve();
    int n;
    cin >> n;
    vector <int>v;
    v  = factorize(n);
    for(auto i : v)
    {
        cout << i << " ";
    }

}