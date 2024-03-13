#include<bits/stdc++.h>

using namespace std;
//dãy con liên tục có tổng nhỏ hơn x
// kĩ thuật 2 con trỏ

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, x; cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int left = 0, res = 1e9;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            while (sum > x)
            {
                res = min(res, i - left + 1);
                sum -= a[left];
                ++left;
            }
            
        }
        if(res == 1e9) cout << "-1\n";
        else cout << res << endl;
    }
    
    return 0;
}
