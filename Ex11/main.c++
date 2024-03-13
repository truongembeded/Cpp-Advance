#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int years;
    cin >> years;
    if(years <= 0){
        cout << "INVALID\n" << endl;
    }else{
        if((years % 400 == 0) || ((years % 4 == 0) && (years % 100 != 0))){
            cout << "YES\n" << endl;
        }else 
        cout << "NO\n" << endl;
    }
    return 0;
}
