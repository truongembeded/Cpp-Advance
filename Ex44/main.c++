#include<bits/stdc++.h>

using namespace std;
// liệt kê số nguyên tố trong ma trận
bool snt(int n){
    for (int i = 0; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        int a[500][500];
        //nhập ma trận
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(snt(a[i][j]) && mp[a[i][j]] == 0){
                    cout << a[i][j] << " ";
                    mp[a[i][j]] = 1;
                }
            }
            
        }
        cout << endl;
    }
    
    return 0;
}
