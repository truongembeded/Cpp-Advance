#include <iostream>
#include <thread>
#include <mutex>

// Khai báo một mutex để đồng bộ hóa truy cập vào biến count
std::mutex count_mutex;

int count = 0;

void increment_count()
{
    // Sử dụng mutex để đảm bảo chỉ có một luồng được phép truy cập vào biến count vào một thời điểm
    std::lock_guard<std::mutex> lock(count_mutex);

    for (int i = 0; i < 5; i++)
    {
        count++;
        std::cout << "Count: " << count << std::endl;
    }
}

int main()
{
    // Tạo hai luồng mới để thực hiện công việc tăng biến count
    std::thread t1(increment_count);
    std::thread t2(increment_count);

    // Đợi cho các luồng hoàn thành công việc của chúng
    t1.join();
    t2.join();

    return 0;
}
