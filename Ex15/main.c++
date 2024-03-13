#include<iostream>
#include<iomanip>
//3 cạnh tam giác
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    // if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
    //     cout << "YES\n" << endl;
    // }else{
    //     cout << "NO\n" << endl;
    // }
    // check là tam giác gì
     if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
        if(a == b && a == c){
            cout << "DEU\n" << endl;
        }else if(a == b || a == c || b == c){
            if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
                cout << "VUONG CAN\n" << endl;
            }else {
                cout << " CAN\n" << endl;
                }
        
    }else if((a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)){
            cout << "VUONG\n" << endl;
        }else {
            cout << "THUONG\n" << endl;
    }
        
    }else{
        cout << "INVALID\n"  << endl;
        }

    return 0;
}
