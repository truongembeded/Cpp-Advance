#include<bits/stdc++.h>

using namespace std;
//O(n2)
void SelectionSort(int a[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i
        for (int j = i + 1; i < n; j++)
        {
            if(a[j] > a[min_pos]){
                min_pos = j;
            }
        }
        swab(a[j], a[min_pos]);
    }
    
}

void BubbleSort(int a[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
        
    }
    
}

void InsertionSort(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        //insert ra phân tu ở i
        int insert = a[i], position = i - 1;
        while (position <= 0 && x < a[positon])
        {
            a[position + 1] = a[position];
            -- position;
        }
        a[position + 1] = insert;
    }
    
}
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    SelectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}
