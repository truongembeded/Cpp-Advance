#include<bits/stdc++.h>
// tìm số nhỏ nhất thứ mấy trong ma trận vuong
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, cnt; cin >> n >> cnt;
        int a[1000001];
        for (int i = 0; i < n*n; i++)
        {
            cin >> a[i];
            
        }
        n *= n;
        sort(a, a + n);
        cnt--;
        cout << a[cnt];
    }
    
    return 0;
}
