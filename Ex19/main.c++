#include<iostream>
#include<math.h>

using namespace std;


bool snt (int n){
    for (int i = 0; i < sqrt(n); i++)
    {
        if(n % i == 0)
        return false;
    }
    return n > 1;
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        sum += a[i];
        cout << sum << " ";
    }
    
    
    return 0;
}
