#include <iostream>

// classes example

using namespace std;

class Rectangle
{
  int width, height; // Members width and height have private access
public:
  void set_values(int, int);            // declared as prototype not-inline) class member function gives compiler customization
  int area() { return width * height; } // inline function
};

// function definition using scope resolution operator
void Rectangle::set_values(int x, int y)
{
  width = x;
  height = y;
}

int main()
{
  Rectangle rect; // rectangle object is created in stack
  rect.set_values(3, 4);
  cout << "area: " << rect.area() << endl;
  return 0;
}
