#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == 0){
        if(b == 0 && c == 0 ){
            cout << "INF\n" << endl;
        }else if(b == 0 && c != 0){
            cout << "NO\n" << endl;
        }else if(b != 0){
            cout << fixed << setprecision(2) << (float) - c / b << endl;
        }
    }else{
        int delta = b * b - 4 * a * c;
        if(delta < 0){
            cout << "NO\n" << endl;
        }else if(delta == 0){
            cout << fixed << setprecision(2) << (float) - b / (2 * a) << endl;
        }else{
            float x1 = (- b + sqrt(delta)) / (2 * a);
            float x2 = (- b - sqrt(delta)) / (2 * a);
            cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
        }
    }
    return 0;
}
