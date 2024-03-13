#include<bits/stdc++.h>
//cho mộit mảng n và truy vấn số đó có nằm trong mảng hay kh
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;
        //map<int, bool> mp;
        // set<int> s;
        // for (int i = 0; i < n; i++)
        // {
        //     s.insert(x);
        //     mp[x] == true;
        // }
        
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int q; cin >> q;
        while (q--)
        {
            int x; cin >> x;
            //if(s.count(x) == 1)
            if(binary_search(a, a + n, x)){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
        
        
    }
    
    return 0;
}
