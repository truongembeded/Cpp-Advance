#include<bits/stdc++.h>

using namespace std;
int cnt [1000001];


int main(int argc, char const *argv[])
{
   int TC; cin >> TC;
   while (TC--)
   {
        int n; cin >> n;
        int a[n];
        //map<int,int> mp;
        memset(cnt, 0, sizeof(cnt));// phần tử của count bằng 0 hết
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]] ++; 
            //mp[a[i]] ++;  
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            //if(mp[a[i]] >= 2)
            if(cnt[a[i]] >= 2){
                ans ++;
            }
        }
        cout << ans << endl;
   }
   
    return 0;
}
