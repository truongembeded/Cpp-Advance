#include<iostream>
#include<map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> mp;

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
