#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n ;
    if((n % 3 == 0) && (n % 5 == 0)){
        cout << 1 << endl;
    }else
        cout << 0 << endl;
    return 0;
}
