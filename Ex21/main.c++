#include<bits/stdc++.h>

using namespace std;

using ll = long long ;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;
        map<ll, bool> mp;
        for (int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            mp[x] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if(mp[i]){
                cout << i << " ";

            }else{
                cout << -1 ;
            }           
        }
        cout << endl;
        
    }
    
    return 0;
}
