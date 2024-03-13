#include<bits/stdc++.h>
// đếm số từ khác nhau trong sâu
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    cin.ignore();
    map<string, int> mp;
    while (TC--)
    {
        string username;
        getline(cin, username);
        if(mp.count(username) == mp.end()){
            cout << username << endl;
        }else{
            cout << username << mp[username]<<endl;
        }
        
    }
    
    return 0;
}
