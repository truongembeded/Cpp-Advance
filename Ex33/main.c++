#include<bits/stdc++.h>

//Equilibrium index
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        long long left = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            sum -= a[i];
            if(sum == left){
                cout << i << " ";
                ok = true;
            }
            left += a[i];
        }
        if(!ok){
            cout << "-1\n";
        }
        cout << endl;
    }
    
    return 0;
}
