#include<bits/stdc++.h>
// tìm phần tử lớn nhất và nhỏ nhất và liệt kê vị trí xuất hiện
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n;
        int a[500][500];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            if(i % 2 == 0){
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j] << " ";
                }
                
            }else{
                for (int j = n - 1; j >= 0; j--)// duyệt ngược lại
                {
                    cout << a[i][j] << " ";
                }
                
            }
            
        }
        cout << endl;
    }
    
    return 0;
}
