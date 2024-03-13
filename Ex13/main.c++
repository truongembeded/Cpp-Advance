#include<iostream>
#include<iomanip>

using namespace std;
//a - z : 97 - 122
//A - Z : 65 - 90
//0 - 9 : 48 - 57
int main(int argc, char const *argv[])
{
    char c;
    cin >> c;
    cout << (int) c << endl;
    if (c >= 97 && c <= 122){
        cout << "YES\n" << endl;
    }else
        cout << "NO\n" << endl;



    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
        cout << "YES\n" << endl;
    }else
        cout << "NO\n" << endl;



    if ((c >= 'A' && c <= 'Z'))
    {
        c += 32;
    }
    cout << c << endl;



    if ((c >= 'a' && c <= 'z'))
    {
        c -= 32;
    }
    cout << c << endl;




    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if(c == 'z' || c == 'Z')
        {
            cout << "a\n" << endl;
        }
        else
        {
            if(c >= 'A' && c <= 'Z')
            {
                c += 32;
            }
            c++;
            cout << c << endl;
        }
    } 
    else
    {
        cout << "INVALID\n" << endl;
    }
    
    return 0;
}
