#include<iostream>
#include<iomanip>
//input day
//output year month day
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int year = n / 365;
    int du = n % 365;
    int month = du / 12;
    int day = du % 12;
    cout << year << " " << month << " " << day << endl;
    return 0;
}
