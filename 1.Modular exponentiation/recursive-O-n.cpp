#include <iostream>
using namespace std;
int recursive(int n,int r)
{
    if(r == 0)
    return 1;

    return n * recursive(n,r-1);
    
}

int main()
{
    // n^(r) = n * n *  ... (r times)
    int n,r;
    cin >> n >> r;
    cout << recursive( n, r) << endl;
}
