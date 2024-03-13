#include<iostream>
#include<algorithm>

using namespace std;
using ll = long long ;

// Algorithm function in STL
// - min
// - max
// - min_element
// - max_element
// - accumulate
// - swap
// - sort
// - stable_sort
// - find
// - binary_search
// - lower_bound : >= x
// - upper_bound : > x
// - memset
// - fill
// - merge
// - reverse
// - set_union
// - set_intersection
// - set_difference
// - set_symmetric_difference
int main(int argc, char const *argv[])
{
    cout << min(10, 20) << endl;
    cout << min ({1,2,3,4}) << endl;
    int a[5] = {1, 2, 4, 6, 8};
    cout << *min_element(a, a + 5) << endl;
    int sum = accumulate(a, a + 5, 0)// tổng phần tử trong mảng
    cout << sum << endl;

    int a[5] = {1, 1, 4, 8, 6};
    auto it = find(a, a + 5, 4);// áp dụng với mảng và vector chưa sx   
    if(it == a + 5){
        cout << "NOT FOUND\n";

    }else{
        cout << "FOUND\n";
    }

    vector<int> v = {1, 2, 1, 3, 5};
    auto it1 = find(v.begin(), v.end(), 5);
    if(it1 == v.end()) cout << "NOT FOUND\n";
    else cout << "FOUND\n";

    int a[5] = {1, 2, 4, 6, 8};
    if(binary_search(a, a + 5, 2)) cout << " FOUND\n";// chỉ áp dụng mảng hoặc vector tăng hoặc giảm dần
    else cout << "NOT FOUND\n";

    int a[5] = {1, 2, 2, 6, 8};
    auto it2 = lower_bound(a, a + 5, 2);
    cout << *it2 << endl;
    cout << (it2 - a) << endl;// in ra index
    vector<int> v = {1, 2, 2, 3, 4};
    auto it2 = lower_bound(v.begin(), v.end(), 2);
    cout << *it2 << endl;
    cout << (it2 - v.begin()) << endl;


    int a[5] = {1, 2, 4, 6, 8};
    memset(a, 0, sizeof(a));// biến phần tử thành 0
    for(int x : a) cout << x << " ";

    int a[] = {1, 2, 4, 6, 8};
    int b[] = {1, 3, 5, 7, 8, 9};
    vector<int> v(11);
    auto it = set_union(a, a + 5, b, b + 6, v.begin());
    v.resize(it - v.begin());
    for(int x : v) cout << x << " ";
    
    return 0;   
}
