#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort (a, a + n, greater<int>());//sort tăng dần 
        //for(int i = k - 1; i >= 0, i--) ngược lại của for dưới
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}
