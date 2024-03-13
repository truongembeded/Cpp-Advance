
#include <algorithm>

// Khai báo mảng dữ liệu số nguyên
int data[] = { 5, 2, 7, 1, 8, 4 };

// Khai báo mảng dữ liệu số thực
float data[] = { 3.14, 2.71, 1.62, 4.23, 0.86 };

// Khai báo mảng dữ liệu số nguyên
int data[] = { 1, 2, 3, 4, 5 };

int main() {
  // Sắp xếp mảng dữ liệu bằng lambda function
  std::sort(data, data + 6, [](int a, int b) {
    return a < b;
  });
  // In ra mảng dữ liệu đã được sắp xếp
  for (int i = 0; i < 6; i++) {
    Serial.println(data[i]);
  }


    // Tìm kiếm phần tử có giá trị là 4.23 bằng lambda function
  float *result = std::find_if(data, data + 5, [](float x) {
    return x == 4.23;
  });
  // In ra vị trí của phần tử tìm được
  Serial.println(std::distance(data, result));

  

  // Tính tổng các phần tử trong mảng dữ liệu bằng lambda function
  int sum = std::accumulate(data, data + 5, 0, [](int a, int b) {
    return a + b;
  });
  // In ra tổng các phần tử trong mảng dữ liệu
  Serial.println(sum);
}





