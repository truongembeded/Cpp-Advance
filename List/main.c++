#include<iostream>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l = {1, 2, 3, 4, 5, 6};

    l.push_back(7);

    cout << "Cac phan tu cua list la :" << endl;
    for(auto i : l){
        cout << i << " ";
    }
    
    return 0;
}
