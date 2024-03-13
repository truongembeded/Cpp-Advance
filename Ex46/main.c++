#include<bits/stdc++.h>
// tìm hàng có tổng  các phần tử lớn nhất
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
        long long ans = -1e18;
        vector<int> row;// lưu các hàng có tổng lớn nhất
        for (int i = 0; i < n; i++)
        {
            //tính tổng các phần tử của hàng thứ i
            long long sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += a[i][j];
            }
            if(sum > ans){// sum lớn hơn thằng lớn nhất cho trước
                ans = sum;
                row.clear();// xoá hết trong vector 
                row.push_back(i);//để lưu thằng lớn nhất
            }else if(sum == ans){// nếu có 2 thằng lớn nhất 
                row.push_back(i); // thì lưu vô luôn
            }
        }
        cout << ans << endl;
        for(int x : row){// duyệt qua thằng vector
            cout << x + 1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}
