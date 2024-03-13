#include<bits/stdc++.h>

using namespace std;
// median là trung vị là phần tử dứng giữa của mảng
int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, x; cin >> n;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }
        sort(a, a + n);// sort tăng dần 
        if(n % 2 == 1){
            cout << a[n / 2] << endl;
        }else {
            cout << a[n / 2 - 1] << endl;
        }
    }
    
    return 0;
}
