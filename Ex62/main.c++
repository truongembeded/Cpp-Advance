#include<bits/stdc++.h>
// in ra phần tử có số lần xuuast hiện nhiều nhất trong mảng
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;
        map<long long, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[i]++;
        }
        long long res, fre = INT_MIN;
        for(auto it : mp){
            if(it.second > fre){
                fre = it.second;
                res = it.first;
            }
        }
        cout << res << " " << fre << endl;
    }
    
    return 0;
}
