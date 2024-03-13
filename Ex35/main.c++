#include<bits/stdc++.h>

//loại bỏ mèo
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
        int res = 1;
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == a[i - 1]){
                ++cnt;
            }else{
                cnt = 1;
            }
            res = max(res, cnt);
        }
        cout << n - res << endl;

    }
    
    return 0;
}
