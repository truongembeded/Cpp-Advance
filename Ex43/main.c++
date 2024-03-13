#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;cin >> n >> m;
    int a[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> a[i][j]
        }
        
    }
    int pre[n + 1][m + 1] = {0};
    //memset(pre, 0, sizeof(pre));
    for (int i = 1; i < n; i++)
    {
        for (int i = 1; i < m; i++)
        {
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
        }
        
    }
    
    int q; cin >> q;
    while (q--)
    {
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;
        cout << pre[h2][c2] - pre[h1 - 1][c2] - pre[h2][c1 - 1] + pre[h1 - 1][c1 - 1] << endl;
    }
    
    return 0;
}
