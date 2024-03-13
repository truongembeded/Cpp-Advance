#include<bits/stdc++.h>

using namespace std;

const int maxn = 1000000;
int a[maxn],n;

int gcd(int a, int b){
    if(b == 0) return a;
    return (b, a % b);
}


int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; 
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = gcd(res, a[i]);
        }
        if(res == 1){
            cout << 0 << endl; continue;
        }
        int ans = 1;
        for (int i = 2; i <= sqrt(res); i++)
        {
            if(res % i == 0){
                ++ans;
                if(i != res / i){
                    ++ ans ;
                }
            }
        }
        cout << ans << endl;
    }
    
    
    return 0;
}
