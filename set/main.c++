#include <iostream>
#include <set>
//khong luu duoc cac phan tu giong nhau
//O(logn)
//Insert
//find 
//count
//erase
int main() {
    // Khởi tạo set
    std::set<int> s = {5, 3, 1, 2, 4};
    
    // Thêm phần tử vào set
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(7);
    cout << s.size() << endl;
    s.erase(6);
    s.erase(s.find(5));
    cout << s.size() << endl;
    // In ra tất cả các phần tử của set
    std::cout << "Cac phan tu cua set la: ";
    for (auto i : s) {
        std::cout << i << " ";
    }

    cout << *s.begin() << endl;//trỏ đến phần tử first
    cout << *s.rbegin()<< endl;//trỏ đến phần tử cuối cùng
    
    if(s.count(5) != 0){
        cout << "found\n";
    }else{
        cout << "not found !\n";
    }


    if(s.find(5) != s.end){
        cout << "found\n";
    }else{
        cout << "not found !\n";
    }

    for(set<int> :: iterator it = s.begin(); it != s.end(); ++it)
    cout << *it <<" ";
    return 0;
}






