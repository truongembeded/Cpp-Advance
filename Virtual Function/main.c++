#include <iostream>
using namespace std;

class Shape {
  public:
    virtual void draw() {
      cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
  public:
    void draw() {
      cout << "Drawing a circle." << endl;
    }
};

int main() {
  Shape* shape = new Circle();
  shape->draw();
  return 0;
}
