#include <iostream>
#include <vector>
using namespace std;
const int N = 1e6;
vector<int> phi(N + 1);
void phi_1_to_n() {
    
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= N; i++)
        phi[i] = i - 1;

    for (int i = 2; i <= N; i++)
        for (int j = 2 * i; j <= N; j += i)
              phi[j] -= phi[i];
}
int main()
{
    phi_1_to_n();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << phi[n] << endl;
    }
}