
#include<bits/stdc++.h>
// tìm cột có nhiều số fabonanci 
using namespace std;

set<long long> fibo;

void init(){
    long long f[93];
    f[0] = 0;
    f[1] = 1;
    for (int i = 0; i <= 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i <= 92; i++)
    {
        fibo.insert(f[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    init();
    int TC; cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        long long a[500][500];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }  
        int ans = -1, cot;// ans là số phần tử fibo của cột cho trước
        long long sum = 0;
        for (int i = 0; i < m; i++)
        {
            long long tmp = 0;
            int dem = 0;
            for (int j = 0; j < n; j++)
            {
                if(fibo.count(a[j][i]) == 1){// nếu a[j][i] là số fibonanci
                    ++dem;// đếm xem cột có bao nhiêu số fibo
                    tmp += a[j][i];// tính tổng các số fibo của cột luôn
                }
            }
            if(dem > ans){// nếu cái biến đếm này mà nhiều phần tử hơn số cho trước
                cot = i;
                ans = dem;
                sum = tmp;// lưu lại cái tổng của cột
            }else if(dem == ans){// nếu có nhiều cột có phần tử số fibo bằng nhau 
                if(sum < tmp){// so xem tổng nào lớn hơn
                    cot = i;
                    sum = tmp;
                }
            }
        }
        cout << cot + 1 << endl;
        for (int i = 0; i < n; i++)
        {
            if(fibo.count(a[i][cot]) == 1){
                cout << a[i][cot] << " ";
            }       
        }
        cout << endl;
    }
    
    return 0;
}