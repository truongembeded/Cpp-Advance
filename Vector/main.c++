#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(n);// khai báo vector nhưng đã có sẳn n phần tử v[n]
    vector<int> v(n, 100);//// khai báo vector nhưng đã có sẳn n phần tử bằng 100
    vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;// nhập cho vector bắt buộc phải tạo 1 cái biến tạm
        v.push_back(x);
    }
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    v.push_back(40);
    cout << v.size() << endl;
    cout << "phan tu dau tien trong vector :" << v[0] << endl;
    cout << "phan tu cuoi cung trong vector :" << v[v.size() - 1] << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    for(int x  : v){
        cout << x << endl;
    }
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){// :: toán tử phạm vi
        cout << *it << endl;
    }

    for(auto it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }

    cout << *v.begin() + 2 << endl;
    return 0;
}
