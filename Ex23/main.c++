#include<bits/stdc++.h>

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
// cách 1 : O(n^2)
        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res = min(res, max(a[i], a[j]) - min(a[i], a[j]));
            }
            
        }
        cout << res << endl;
//cách 2 : O(logn)
        sort(a, a + n);
        int res = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            
            res = min(res,  min(a[i] -  a[i - 1]));
        }
    }
    return 0;
}
