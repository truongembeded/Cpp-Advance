#include<bits/stdc++.h>
// đtừ lặp đầu tiên trong xâu
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
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        for(string x : v){
            if(se.find(x) != se.end()){
                cout << x << endl; break;
            }
            se.insert(x);
        }
    }
    
    return 0;
}
