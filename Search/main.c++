#include<iostream>
#include<algorithm>

using namespace std;

//linear search O(n)
bool ls(int a[], int n, int x){
    for (int i = 0; i < n; i++)
    {
        if(a[i] == x){
            return true;
        }
        return false;
        
    }
    
}

//Binary search O(logn)
//các phần tử phải được sắp xếp tăng dần hoặc giảm dần
bool bs(int a[], int n, int x){
    int l = 0; int r = n - 1;
    int m = l + (r - l) / 2;
    while (l <= r)
    {
        if(a[i] == x){
            return true;
        }else if(a[i] < x){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return false;
}

bool binarySearch (int a[], int l, int r, int x){
    if(l  > r){
        return false;
    }
    int m = l + (r - l) / 2;
    if(a[m] == x){
        return true;
    }else if(a[m] < x){
        return binarySearch(a, m + 1, r, x);
    }else{
        return binarySearch(a, l, m - 1, x);
    }
}

//binary_search(a + x, a + y, key) => a[x] -> a[y - 1]
//binary_search(a + 1, a + 4, key)
//binary_search(v.begin(), v.end(), key)
//bianry_search(v.begin() + x, v.begin() + y, key) => v[x] -> v[y - 1]

//tìm vị trí đầu tiên của một phần tử trong mảng
// 10 3
// 1 1 2 3 3 3 3 4 5 6
int firstPos(int a[], int n, int x){
    int res = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }else if( a[m] < x){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return res;
}

int LastPos(int a[], int n, int x){
    int res = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
        }else if(a[m] < x){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int n, x; cin >> n >> x;
    int a[n];
    //vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //cin >> v[i];
    }
    if(binarySearch(a, 0, n - 1, x)){
        cout << " FOUND!\n";
    }else{
        cout << "NOT FOUND!\n"
    }
    // for(int &x : a){
    //     cin >> x;
    // }
    // cout << firstPos(a, n, x) << " " << LastPos(a, n, x) << endl;
    return 0;
}
