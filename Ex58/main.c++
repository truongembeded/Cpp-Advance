#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cin.ignore(1);// xoá 1 kí tự dấu cách để nhập đc getline 
    string s = "python";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }

    for(char x : s)
    {
        cout << x << endl;
    }
    
    cout << s.length() << endl;

    cout << s.size << endl;

    cout << s[1] << endl;

    getline(cin, s);// in ra luôn dấu cách
    cout << s << endl;

    string a = "python";
    string b = " java";
    cout << a.compare(b) << endl;// hàm này trả về -1 0 1
    if(a > b){
        cout << " a lon hon b\n ";
    }else if ( a == b){
        cout << " a bang b\n";
    }else {
        cout << " a nho hon b\n";
    }
    //a += b;
    //cout << a << endl;
    string c = a + b;
    cout << c << endl;

    string a = "abcdef";
    string b = a.substr(2, 4);// cắt chuổi từ chỉ số cho tới mấy kí tự

    string a = "12345";
    int x = stoi(a);// chuyển đổi từ chuổi sang số int
    long long x = stoll(a);//chuyển chuổi sang số long long
    cout << x << endl;

    int n = 123456;
    string s = to_string(n);// chuyển từ số sang string

    string s = "java python  php lap   trinh";
    stringstream ss(s);// tách các từ trong string s
    string tmp;
    int cnt = 0;
    while (ss >> tmp)// tách cái java ra rồi gán vô biến tmp
    {
        cout << tmp << endl;
        ++cnt;
       
    }
        cout << cnt <<endl;
    
    string = "java.python.php.lap.trinh";
    stringstream ss (s);
    string tmp;
    while (getline(ss, tmp, '.'))
    {
        cout << tmp << endl;
    }
    

    return 0;
}
