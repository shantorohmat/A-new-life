#include <iostream>
#include <vector>
using namespace std;
#define endl "\n";
#define fastIo ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int N = 1e6+7;
vector<int> v;
void divisor(int n)
{
    for(int i = 1;i*i <= n;i++ )
    {
        if(n%i == 0)
        {
            v.push_back(i);
        }
    }
    
}
int main()
{
    //O(n)
    int  t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        divisor(n);
        for(int i : v)
        {
            cout << " " << i ;
        }
    }
}