#include<iostream>
#include<iomanip>
#include<math.h>    

using namespace std;

int main(int argc, char const *argv[])
{
    
    int c;
    cin >> c;
    double f = (double) c * 9 / 5 + 32;
    cout << fixed << setprecision(2) << f << endl;

    return 0;
}