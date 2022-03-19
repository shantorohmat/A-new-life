#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define endl "\n";
#define fastIo ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int N = 1e6+7;
typedef set<int> sets;
sets s;
sets divisor(int n)
{
    for(int i = 1;i <= sqrt(n);i++ )
    {
        if(n%i == 0)
        {
            if(n/i == i)
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
    //O(sqrt(n))
    int  t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        sets v = divisor(n);
        for(int i : v)
        {
            cout << " " << i ;
        }
    }
}