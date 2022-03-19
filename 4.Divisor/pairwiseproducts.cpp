#include <iostream>
#include <cassert>
using namespace std;
#define N 10000007
#define ll long long int

ll divSum[N];
ll divSqrSum[N];
void divisor()
{
    for(int i = 1;i <= N;i++)
    {
        for(int j = i;j <= N;j += i)
        {
            divSum[j] += i;
            divSqrSum[j] += (ll) (i) * (ll) (i);
        }
    }
}
int main()
{
    divisor();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << (divSum[n]*divSum[n] - divSqrSum[n])/2 << endl;

    }

}