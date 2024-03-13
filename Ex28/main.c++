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
        int min_val = a[0], res = -1e9;
        for (int i = 0; i < n; i++)
        {
            if(a[i] > min_val){
                res = max(res, a[i] - min_val);
            }
            min_val = min(a[i], min_val);// cập nhật lại min_val là thằng nhỏ nhất kết thúc ở chỉ số i

        }
        if(res == -1e9){
            cout << "-1\n" << " ";
        }else{
            cout << res << endl;
        }
        

        
    }
    
    return 0;
}