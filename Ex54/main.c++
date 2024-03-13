#include<bits/stdc++.h>
//tìm đường đi có tổng nhỏ nhất nhất chỉ di chuyển sang phải hoặc xuống dưới
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }
        int dp[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(i == 0 && j == 0){
                    dp[i][j] = a[i][j];
                }else if(j == 0){
                    dp[i][j] = dp[i - 1][j] + a[i][j];
                }else if(i == 0){
                    dp[i][j] = dp[i][j - 1] + a[i][j];
                }else{
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
                }
            
        }  
    }
    cout << dp[n - 1][m - 1] << endl;
}
return 0;
}