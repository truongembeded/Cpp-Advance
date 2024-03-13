#include<bits/stdc++.h>
// thay thế phần tử bằng tổng các số xung quanh nó
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//i +dx[0]
//j +dy[0]
int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        int a[500][500];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }
            int res[500][500];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int sum = a[i][j];
                    for (int k = 0; k < 8; k++)// duyệt qua 8 số xung quanh nó
                    {
                        int inew = i + dx[k];
                        int jnew = j + dy[k];
                        if(inew >= 0 && inew < n && jnew >= 0 && jnew < m){
                            sum += a[inew][jnew];
                        }
                    }
                    res[i][j] = sum;
                    
                }
               
            }
             for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << res[i][j] << " ";
                    }
                    cout << endl;
                }
                
    }
    
    return 0;
}
