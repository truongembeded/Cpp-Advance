#include <iostream>
using namespace std;

void increment(int* n) {
  (*n)++;
}

int main() {
  int x = 10;
  increment(&x);
  cout << x;
  return 0;
}
