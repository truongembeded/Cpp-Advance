#include<bits/stdc++.h>
// đếm số từ khác nhau trong sâu
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    cin.ignore();
    while (TC--)
    {
        string s;
        getline(cin, s);
        set<string> se;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            se.insert(tmp);
        }
        cout << se.size() << endl;
    }
    
    return 0;
}
