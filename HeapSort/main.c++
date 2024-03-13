#include<bits/stdc++.h>

using namespace std;


void Heapifi(int a[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && a[left] > a[largest]){// left < n là check xem nút gốc có nút con hay kh
        largest = left;
    }
    if(right < n && a[right] > a[largest]){
        largest = right;
    }
    if(largest != i){
        swap(a[i], a[largest]);
        Heapifi(a, n, largest);
    }
}

void HeapSort(int a[], int n){
    // xây dựng max Heap
    // chỉ số n / 2 - 1 là chỉ số của nút không phải là nút lá trở về 0 để heapifi
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        Heapifi(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        Heapifi(a, i, 0);
    }
    
    
}
int main(int argc, char const *argv[])
{
    int n = 100; 
    int a[1000];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 500;
    }
    HeapSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}
