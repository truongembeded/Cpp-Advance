#include <iostream>
#include <map>

int main() {
    // Khởi tạo map
    std::map<std::string, int> m;
    m["Alice"] = 25;
    m["Bob"] = 30;
    m["Charlie"] = 35;
    
    // In ra tuổi của Bob
    std::cout << "Tuoi cua Bob la: " << m["Bob"] << std::endl;
    
    // Thêm một cặp key-value mới vào map
    m.insert(std::make_pair("David", 40));
    m.erase("Bob");
    // In ra tất cả các cặp key-value của map
    std::cout << "Cac cap key-value cua map la: ";
    for(pair<int, int> i : m){
        std::cout << i.first << ":" << i.second << " ";
    }

    for (auto i : m) {
        std::cout << i.first << ":" << i.second << " ";
    }

    for(map<int, int> :: iterator it = mp.begin(); it != mp.end(); ++it){
        std::cout << (*it).first << ":" << (*it).second << endl;
    }
    
    return 0;
}
