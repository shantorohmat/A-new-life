#include <iostream>
using namespace std;
#define endl "\n";
#define fastIO ios_base:: sync_with_stdio(false);
typedef long long int ll;
const int N = 1e6+7;
const int mod = 1e9+7;
ll phi[N];
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
                phi[j] = phi[j]/i; 
                phi[j] = phi[j] * (i-1);
            }
        }
    }


}
int main()
{
    fastIO;
    phi_1_n();
    int t;
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        cout << phi[n]  * n<< endl;
    }
}