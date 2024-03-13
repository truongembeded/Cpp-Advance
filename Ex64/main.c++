#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    cin.ignore();
    while (TC--)
    {
        string s;
        getline(cin, s);
        //map<char, bool> mp;
        set<char> se;
        for(char x : s){
            se.insert(tolower(x));// kh phân biệt hoa thường
            //mp[tolower(x)] = true;
        }
        cout << se.size() << endl;
        if(se.size() == 26){
            cout << "YES\n";
        }else{
            cout << " NO\n";
        }
    }
    
    return 0;
}
