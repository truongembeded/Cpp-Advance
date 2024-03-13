#include<bits/stdc++.h>
// xâu có kí tự xuất hiện nhiều nhất
using namespace std;

int main(int argc, char const *argv[])
{
    int TC: cin >> TC;
    cin.ignore();
    while (TC--)
    {
        string s;
        getline(cin, s);
        //map<char, int> mp;
        int a[256] = {0};
        for(char x : s){
            a[x]++;
            //mp[x]++;
        }
        char res; int fre = 0;
        for (int i = 0; i < 256; i++)
        {
            if(a[i] > fre){
                fre = a[i];
                res = (char)i;
            }
        }
        // for(auto it : mp){
        //     if(it.second > fre){
        //         fre = it.second;
        //         res = it.first;
        //     }
        // }
        //cout << res << endl;
        cout << (char)res << endl;
    }
    
    return 0;
}
