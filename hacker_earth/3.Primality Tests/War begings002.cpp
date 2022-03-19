#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define endl "\n"
#define fastio ios_base :: sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
const int N = 5000001;
const int mod = 1e8+7;
int Isprime[N];
typedef map<int,int> maps;
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
        {

            for(int j = i * i; j <= N;j += i)
            {
                if(Isprime[j] == true)
                {
                    Isprime[j] = false;
                }

            }
        }
    }

}

int num[5000001]={0};

void res()
{

        sieve();

        for(int i=3;i<=5000000;i++){

        if(Isprime[i])

            num[i]=(num[i-1]+(i/2))%mod;

        else num[i]=(num[i-1])%mod;

}

}
int main()
{
     res();

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        cout<<num[n]<< endl;

    }
}