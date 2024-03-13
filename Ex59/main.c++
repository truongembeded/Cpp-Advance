#include<iostream>
#include<map>
#include<set>
//đếm các phần tử khác nhau trong mảng số nguyên 
using namespace std;

int main(int argc, char const *argv[])
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        map<int,bool> mp;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            s.insert(x);
            mp[x] = true;
        }
        cout << s.size() << endl;
        cout << mp.size() << endl;
    }
    
    return 0;
}
