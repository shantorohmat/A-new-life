#include <iostream>
#include <vector>
using namespace std;
vector<int> factorize(int n)
{
    
    vector<int> res;

    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0) 
        {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) 
    {
        res.push_back(n);
    }
    return res;
}
int main()
{
    //O(sqrt(n))
    int n;
    cin >> n;
    vector <int>v;
    v  = factorize(n);
    for(auto i : v)
    {
        cout << i << " ";
    }

}