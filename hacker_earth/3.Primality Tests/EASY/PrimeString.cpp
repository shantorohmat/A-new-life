// Bismillahir Rahmanir Rahim -- In the name of God, the Most Gracious, the Most Merciful
// Md. Rohmat Ulla 
// iiuc,Bangladesh
// 2/27/2022
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
const int N = 1e6+7;
bool Isprime[N];
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
            for(int j = i * i;j <= N;j += i)
            {
                if(Isprime[j] == true)
                Isprime[j] = false;
            }
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        set<char>s1;
        map<char,int>freq;
        for(int i = 0;i < s.size();i++)
        {
            freq[s[i]]++;
            s1.insert(s[i]);
        }
        
        int x = s1.size();
        if(Isprime[x])
        {
            int k = 0;
            for(auto i: freq)
            {
                auto xx = i.second ;
                if(Isprime[xx]== false)
                {
                    //cout << xx << endl;
                    cout << "NO" << endl;
                    k = 1;
                    break;
                }
            }
            if(k == 0)
            cout << "YES" << endl;
            

        }
        else 
        {
            //cout << x << endl;
            cout << "NO" << endl;
            continue;
        }
    }
}