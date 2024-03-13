#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v(a, a + n);// copy mảng a cho vector v
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(v.begin(), v.end(), a[i]);//tìm phần tử nhỏ nhất lớn hơn phần tử tìm kiếm
            if(it == v.end()){
                cout << "_";
            }else{
                cout << (*it) << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
