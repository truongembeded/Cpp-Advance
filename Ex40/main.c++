#include<bits/stdc++.h>

using namespace std;
// tăng giá trị của mảng sao cho >= số trước
int main(int argc, char const *argv[])
{
    int TC; TC = 1;
    while (TC--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 1; i < n; i++)
        {
            if(a[i] < a[i - 1]){
                ans += a[i - 1] - a[i];
                a[i] = a[i - 1];
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
