#include<bits/stdc++.h>

using namespace std;

int f[1001];

void khoitao(){
    int fibo[20];
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i < 19; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; fibo[i] < 1000; i++)
    {
        f[fibo[i]] = 1;
    }
    
    
}
int main(int argc, char const *argv[])
{
    khoitao();
    int TC ; cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(f[a[i]]) cout << a[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}