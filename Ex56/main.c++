#include<bits/stdc++.h>
// hàng nào nhiều 1 hơn 0 thì đếm là 1 cứ thế tăng lên
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        int a[n][m];
        int ans = 0, cnt = 0;// ans đếm xem bao nhiêu hàng có 1 nhiều hơn 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cnt = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                cnt += a[i][j];
            }
            if(cnt >= 2) ++ ans;
        }
        cout << ans << endl;
    }
    
    return 0;
}
