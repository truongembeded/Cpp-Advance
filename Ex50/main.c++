#include<bits/stdc++.h>
// in ra biên của ma trận
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n ;
        int a[500][500];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                    cout << a[i][j] << " ";
                
                }else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
        
    }
    
    return 0;
}
