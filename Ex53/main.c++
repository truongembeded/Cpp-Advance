#include<bits/stdc++.h>
//tìm đường đi có tổng lớn nhất chỉ được đi xuống trái hoặc xuống phải
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
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(j == 0){
                    a[i][j] += max(a[i - 1][j],a[i - 1][j + 1]);
                }else if(j == m - 1){
                    a[i][j] += max(a[i - 1][j - 1], a[i - 1][j]);
                }else{
                    a[i][j] += max(a[i - 1][j], max(a[i - 1][j - 1], a[i - 1][j + 1]));
                }
            }
            
        }
        //cách 1
        int res = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            res = max(res, a[n - 1][i]);
        }
        cout << res << endl;
        cout << *max_element(a[n - 1], a[n - 1] + m) << endl;//cách 2
    }
    
    return 0;
}
