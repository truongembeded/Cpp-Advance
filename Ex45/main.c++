#include<bits/stdc++.h>
// tìm phần tử lớn nhất và nhỏ nhất và liệt kê vị trí xuất hiện
using namespace std;

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
        int max_val = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                max_val = max(max_val, a[i][j]);
                // if(a[i][j] > max_val  ){
                //     max_val = a[i][j];
                // }
            }
            
        }
        cout << max_val << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a[i][j] == max_val){
                    cout << " vi tri xuat hien : " << "A[" << i + 1 << "][" << j + 1 << "]\n";
                }
            }
            
        }
        
        
    }
    
    return 0;
}
