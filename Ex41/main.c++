#include<bits/stdc++.h>

using namespace std;
// truy vấn tính tổng 1 đoạn trên mảng
int main(int argc, char const *argv[])
{
    //O(n)
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int q ; cin >> q;// truy vấn
    while (q--)
    {
        int l, r; cin >> l >> r;
        int sum = 0;
        for (int i = l; i < r; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
    }
    
    //O(1)
    // int n; cin >> n;
    // int a[n + 1];
    // for (int i = 1; i <= n; i++) 
    // {
    //     cin >> a[i];
    // }
    
    // int prefix[n + 1] = {0};
    // for (int i = 1; i <= n; i++)
    // {
    //     prefix[i] = prefix[i - 1] + a[i]
    // }
    // int q; cin >> q;
    // while (q--)
    // {
    //     int l, r; cn >> l >> r;
    //     cout << prefix[r] - prefix[l - 1] << endl;
    // }
    
    
    
    return 0;
}
