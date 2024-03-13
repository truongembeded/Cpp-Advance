#include<bits/stdc++.h>
// tìm tổng phần tử thuộc tam giác dưới của ma trận vuông
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;// ma trận vuông cột hàng bằng nhau
        int a[500][500];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
            
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += a[i][j];
            }
            
        }
        cout << sum << endl;
    }
    
    return 0;
}
