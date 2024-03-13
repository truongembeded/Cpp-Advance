#include<bits/stdc++.h>

using namespace std;

void Merge(int a[], int l, int m, int r){
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())//merge 2 mảng đã sort tăng dần thành 1 mảng tăng dần
    {
        if(x[i] <= y[j]){
            a[l] = x[i]; ++l; ++i;
        }else{
            a[l] = y[j]; ++l; ++j;
        }
    }
    //khi merge 2 mảng được sort mảng nào dài hơn thì các phần tử còn lại được ghi xuống
    while (i < x.size()) 
    {
        a[l] = x[i]; ++l; ++i;
    }
    while (j < x.size())
    {
        a[l] = y[j]; ++l; ++j;
    }
    
    
}

void MergeSort(int a[], int l, int r){
    if(l >= r) return;
    int m = (l + r) / 2;
    MergeSort(a, l, m);
    MergeSort(a, m + 1, r);
    Merge(a, l, m, r);
}

int main(int argc, char const *argv[])
{
    int n = 100;
    int a[100];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
    }
    
    for(int x : a){
        cout << x << " ";
    }
    return 0;
}
