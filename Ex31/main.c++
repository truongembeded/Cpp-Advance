#include<bits/stdc++.h>

using namespace std;

// hàm tính ước chung lớn nhất của 2 số
int gcd(int a, int b){
    if(b == 0) return a;
    return (b, a % b);
}

const int maxn = 1000;
int a[maxn];
//map<int, int> mp;

// void solve(int n){
//     for (int i = 1; i < sqrt(n); i++)
//     {
//         if(n % i == 0){
//             mp[i]++;
//             if(i != n / i) mp[n / i]++;
//         }
//     }
    
// }

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
            //solve(a[i]);
        }
        int res = 1;
        // for (auto it : mp)
        // {
        //     if(it.second >= 2){
        //         res = it.first;
        //     }
        // }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res = max(res, gcd(a[i], a[j]));
            }
            
        }
        cout << res << endl;
        //map.clear();
    }
    
    return 0;
}
