#include <iostream>    /* File : constexpr-constructor-object.cpp */
using namespace std;

class Rectangle { 
  private:
    int width {0};
    int height {0};

  public: 
    // A constexpr constructor 
    constexpr Rectangle(int width, int height) : width(width), height(height) {} 
    constexpr int getArea() { return width * height; } 
}; 
  
int main() { 
  // rect is initialized at compile time
  constexpr Rectangle rect(10, 20);
  cout << rect.getArea(); 
  return 0; 
}
