#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define endl "\n";
#define fastIo ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int N = 1e6+8;
int phi[N];
int Isprime[N];
typedef set<int> sets;
sets s;
void phi_1_n()
{
    for(int i = 0;i <= N;i++)
    {
        phi[i] = i;
    }

    for(int i = 2;i <= N;i++)
    {
        if(phi[i] == i)
        {
            for(int j = i;j <= N;j += i)
            {
                phi[j] = phi[j]/i; // n/prime where i == prime && phi[j] = n
                phi[j] = phi[j] * (i - 1); // // {n * (prime-1)}/prime = (n/prime) * (prime-1)
            }
        }
    }
}
sets divisor(int n)
{
    for(int i = 1;i <= sqrt(n);i++ )
    {
        if(n%i == 0)
        {
            if(n%i == i)
            {
                s.insert(i);
            }
            else 
            {
                s.insert(i);
                s.insert(n/i);
            }

        }
       
        
    }
    return s;
    
}

int main()
{
    phi_1_n();
    int n;
    cin >> n;
    sets s = divisor(n);
    int sum = 0;
    for(auto i: s)
    {
        sum +=  phi[n/i];
    }
    cout << sum << endl;

}