#include<bits/stdc++.h>

using namespace std;
// máy tính điên
int main(int argc, char const *argv[])
{
    int TC; TC = 1;
    while (TC--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if(a[i] - a[i - 1] <= c) {// khoảng thời gian của số sau trừ số trước mà nhỏ hơn số time c cho trước
                ++cnt;
            }else{
                cnt = 1;// reset cnt = 1
            }
        }
        cout << cnt << endl;
        
    }
    
    return 0;
}
