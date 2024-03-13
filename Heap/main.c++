#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Khởi tạo vector
    std::vector<int> v = {5, 2, 8, 3, 1, 9};
    
    // Sắp xếp vector thành heap
    std::make_heap(v.begin(), v.end());
    
    // In ra phần tử lớn nhất của heap
    std::cout << "Phan tu lon nhat cua heap la: " << v.front() << std::endl;
    
    // Thêm phần tử mới vào heap và sắp xếp lại
    v.push_back(10);
    std::push_heap(v.begin(), v.end());
    
    // In ra tất cả các phần tử của heap
    std::cout << "Cac phan tu cua heap la: ";
    for (auto i : v) {
        std::cout << i << " ";
    }
    
    return 0;
}
