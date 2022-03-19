#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define endl "\n"
#define fastio ios_base :: sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
const int N = 1e6+7;
int Isprime[N];
typedef map<int,int> maps;
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

            for(int j = i * i; j <= N;j += i)
            {
                if(Isprime[j] == j)
                {
                    Isprime[j] = i;
                }

            }
        }
    }

}
maps primefactoriz(int n)
{
    int x = n;
    maps cnt;

    while(x != 1)
    {
        cnt[Isprime[x]]++;
        x /= Isprime[x];
    }
    return cnt;


}
int odd_even(int n)
{
    int odd = 0;
    n = n - 1;
    while(n){
         if(n%2 == 1)
        {
            odd = (n-1)/2;
            odd += 1;
            return odd;
        }
        n --;

    }
    return 0;
   
    
    
    
    
}
int main()
{
    sieve();
    int q;
    cin >> q ;
    while(q--)
    {
        int n, xx[100],k = 0;
        cin >> n;
        map<int,int> cnt;
        cnt = primefactoriz(n);

        for(auto i : cnt)
        {
            xx[k++] = i.first;
            //cout << i.first << " " << i.second << endl;
        } 
        cout << k << endl;

        for(int i = 0;i < k;i++)
        {
            //cout << xx[i] << " ";
            int odd = odd_even(xx[i]);
            int even = xx[i] - odd - 1;
            // cout << odd << " " << even << endl;
            int x = min(odd,even);
            sum += x;
        }


    }
}