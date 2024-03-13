#include <iostream>
using namespace std;

class MyClass {
  public:
    static void myStaticFunction() {
      cout << "This is a static function." << endl;
    }
};

int main() {
  MyClass::myStaticFunction();
  return 0;
}
