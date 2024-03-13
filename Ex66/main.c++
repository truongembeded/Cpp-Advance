#include<bits/stdc++.h>
// từ có số lần xuất hiện nhiều nhất trong sâu
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    cin.ignore();
    while (TC--)
    {
        string s;
        getline(cin, s);
        map<string, int> mp;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            mp[tmp]++;
        }
        string res; int fre = 0;
        for(auto it : mp){
            if(it.second > fre){
                fre = it.second;
                res = it.first;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}
