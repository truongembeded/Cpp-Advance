#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long long s = 1ll * n * (n + 1)/ 2;
    long long res = 1ll * n * (n + 1) * (2 * n + 1)/ 6;
    double Sn = 1 * 1.0 / (n + 1);
    long long ss = 1ll * n * (n + 1);
    long long n;
    cin >> n;
    if (n % 2 == 0){
        cout << n / 2 << endl;
    }else{
        cout << (- n - 1) / 2 << endl;
    }
    {
        /* code */
    }
    
    cout << s << endl;
    cout << res << endl;
    cout << fixed << setprecision(2) << Sn << endl;
    cout << ss << endl;
    return 0;
}
