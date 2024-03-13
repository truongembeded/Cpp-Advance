#include<bits/stdc++.h>

using namespace std;
// phân hoạch lomuto
// phân hoạch Hoare
int Partition(int a[], int l, int r){
    int pivot = a[r];// chốt là phần tử bên phải cùng
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if(a[j] < pivot){
            ++i;
            swap(a[i], a[j]);
        }
    }
    ++i;
    swap(a[i], a[r]);
    return i;// vi tri
}

int Partition2(int a[], int l, int r){
    int pivot = a[l];
    int i = l - 1; int j = r + 1;
    while (1)
    {
        do{
            ++i;
        }while(a[i] < pivot);
        do{
            --j;
        }while(a[j] > pivot);
        if(i < j){
            swap(a[i], a[j]);
        }else{
            return j;
        }
    }
    
}

void QuickSort2(int a[], int l, int r){
    if(l >= r) return;
    int p = Partition2(a, l, r);
    QuickSort(a, l, p );// lấy luôn vị trí pivot
    QuickSort(a, p + 1, r);
        
}

void QuickSort(int a[], int l, int r){
    if(l >= r) return;
    int p = Partition(a, l, r);
    QuickSort(a, l, p - 1);
    QuickSort(a, p + 1, r);
        
}
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[1000];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    QuickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
