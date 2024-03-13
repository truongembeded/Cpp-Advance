#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    int max, min;
    cin >> a >> b >> c;
    if(b > a && b > c){
        max = b;
    }else if(c > a && c > b){
        max = c;
    }else{
        max = a;
    }

    if(b < a && b < c){
        min = b;
    }else if(c < b && c < a){
        min = c;
    }else{
        min = a;
    }

// cách 2
    int max = a , min = a;
    if(b < a) min = b;
    if(c < a) min = c;
    if(b > a) max = b;
    if(c > a) max = c;
    cout << max << " " << min << endl;

    return 0;
}
