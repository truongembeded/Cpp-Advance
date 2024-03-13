#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int r;
    cin >> r ;
    double chuvi = 2 * 3.14 * r;
    double dientich = 3.14 * r * r;
    cout << fixed << setprecision(2) << chuvi << " " << dientich << " " << endl;
    return 0;
}

