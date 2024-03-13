#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
         s += i;        
    }
    cout << s << endl;

    for (int i = 0; i < n; i++)
    {
        s += i * i;
    }
    cout << s << endl;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            s += i;
            
        }
        cout << s << endl;
    }


    //while
int i = 0;
    while (n <= 5)
    {
        cout << i << endl;
        i ++;
    }
    cout << "gia tri cua i sau khi ket thuc while :" << i << endl;

    int count = 0;
    while (n != 0)
    {
        count ++;
        count = n % 10;
        n /= 10;
    }
    cout << count << endl;
    

    // do while
    int i = 0;
    do
    {
        cout << i << endl;
        ++ i;
    } while (i < 0);
    

    // độ phức tạp
    int n = 10; //O(1)
    int a = a + 1;//O(1)
    cin >> a ;//O(1)
    //O(n)

    return 0;
}
