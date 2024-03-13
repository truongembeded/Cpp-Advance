#include<bits/stdc++.h>

//tần suất lẻ dùng XOR
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = a[0];
        for (int i = 0; i < n; i++)
        {
            ans ^= a[i];
        }
        cout << ans << endl;

    }
    
    return 0;
}
