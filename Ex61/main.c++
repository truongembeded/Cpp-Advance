#include<bits/stdc++.h>
// cho 2 mảng đếm  phần tử mảng thứ nhất không thuộc mảng 2
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        int a[n],  b[m];
        for(int &x :a ) cin >> x;
        //map<int, bool> mp;
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            int x; cin >> x;
           // mp[x] = true;
            s.insert(x);
        }
        
        bool ok = false;
        for(int x : a){
            if(s.find(x) == s.end()){
                cout << x << " ";
                ok = true ;// found
            }
        }
        if(!ok) cout << "NOT FOUND!\n";
        else cout << endl;
    }
    
    return 0;
}
