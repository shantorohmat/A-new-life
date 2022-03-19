#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool pandigit(int n)
{
    string s = to_string(n);  /// time complexity O(1)
    int b = 0;
   
  
   sort(s.begin(),s.end());///time complexity O(n log n)
   
   
   
   for(int i = 0;i < s.size();i++)/// time complexity O(9)
   {
       string ss = "123456789";
       if(s[i] != ss[i])
       {
           b = 1;
           break;
       }

   }
   if(b == 1)
   return false;
   else return true;
   
    
}
int cnt[1000*1000+7];
void precompute()
{
    for(int i = 1;i <= 1000*1000;i++)
        {
            if(pandigit(i))
            {
                cnt[i] = 1;
            }

        }
    for(int i = 1;i <= 1000*1000;i++)
    {
        cnt[i] += cnt[i-1];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    precompute();
   
    int n;
    cin >> n ;
    
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        cout << cnt[r] - cnt[l-1];
        
        
        cout <<  endl;
    }
}