#include <iostream>
using namespace std;
int iterative(int n,int r)
{
    int res = 1;
    while(r--)
    {
        res = res * n;

    }
    return res;
}
int main()
{
    //3^(2) = 3 * 3
    //n^(r) = n * n * ...
    int n,r;
    cin >> n >> r;
    cout << iterative(n,r) << endl;

}