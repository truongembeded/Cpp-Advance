#include<bits/stdc++.h>

using namespace std;
// sort array again
int main(int argc, char const *argv[])
{
     int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos[101]={0};
        for (int i = 0; i < m; i++)
        {
            int x; cin >> x;
            pos[x - 1] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if(pos[i] == 0) continue;// cái index mà khong swap đc thì bỏ qua
            int index = i;// bắt đầu từ i duyệt cái index liên tiếp mà cho phép hoán vị
            while (index < n && pos[index])// lặp khi nào mà cái index < n và pos[index] = 1
            {
                ++ index;
            }
            sort(a + i, a + index + 1);
            i = index;// cập nhật i = index
        }
        // kiểm tra mảng có tăng dần hay không
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if(a[i] > a[i + 1]){
                ok = false; break;
        }
        
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
       

    return 0;
}
