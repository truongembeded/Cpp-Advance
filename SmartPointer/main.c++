#include <memory>

int main() {
    std::unique_ptr<int> ptr(new int);
    *ptr = 10;

    // Không thể sao chép unique_ptr
    // std::unique_ptr<int> ptr2 = ptr; // Sai

    // Di chuyển unique_ptr
    std::unique_ptr<int> ptr2 = std::move(ptr);






    std::shared_ptr<int> ptr(new int);
    *ptr = 10;

    // Sao chép shared_ptr
    std::shared_ptr<int> ptr2 = ptr;

    std::shared_ptr<int> ptr(new int);
    *ptr = 10;




    std::weak_ptr<int> weakPtr = ptr;

    // Không thể truy cập đối tượng thông qua weak_ptr trực tiếp
    // int value = *weakPtr; // Sai

    // Chuyển weak_ptr sang shared_ptr để truy cập đối tượng
    std::shared_ptr<int> ptr2 = weakPtr.lock();
    if (ptr2 != nullptr) {
        int value = *ptr2;
    }


    return 0;
}
