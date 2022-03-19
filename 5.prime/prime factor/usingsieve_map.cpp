#include <iostream>
#include <map>
#include <vector>
#define ll long long int
using namespace std;
const int N = 1e6;
int factors[N];
void sieve(){

    //O(N log log N)
     for(int i = 0; i < N;i++)
    {
        factors[i] = i;
    }
    factors[0] = 0;
    factors[1] = 1;
    for(int i = 2;i * i <= N;i++)
    {
        if(factors[i] == i)
        {
            for(int j = i * i ;j <= N;j += i)
            {
                if(factors[j] == j)
                {
                    factors[j] = i;
                }
                
            }
        }
    }
}
map<int,int> factorize(ll n)
{
    map<int,int> cnt;
    int x = n;
    while(x!=1){
        cnt[factors[x]]++;
        x/=factors[x];
    }
    return cnt;

}
int main()
{
    //O(log N)
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int,int> cnt = factorize(n);
        for(auto i : cnt)
        {
            cout << i.first << " " << i.second << endl;
        }


    }

}