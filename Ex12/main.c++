#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int month , year;
    cin >> month >> year;
    if(month <= 0 || month > 12 || year <= 0){
        cout << "INVALID\n" << endl;

    }else{
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
            cout << " 31\n" << endl;
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){
            cout << "30\n" << endl;
        }
        else{
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
                cout << "29\n" << endl;
            }
            else
                cout << "28\n" << endl;
        }
    }
    return 0;
}
