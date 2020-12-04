#include <iostream>
using namespace std;

// Base class
class Shape {
  private:
    int id;
    static int number;
  protected:
    int width;
    int height;
    int getId(){return id;}
  public:
    Shape(){
      id = number;
      cout << "Shape " << number++ << " created" << endl;
    }
    ~Shape(){
      cout << "Shape " << id << " destroyed" << endl;
    }
    void setWidth(int w){width = w;}
    void setHeight(int h){height = h;}
};
int Shape::number=1;

// Derived class
class Rectangle: public Shape {
  public:
    int getArea() { 
      return (width * height); 
    }
    Rectangle(){
      cout << "Rectangle " << getId() << " created" << endl;
    }
    ~Rectangle(){
      cout << "Rectangle " << getId() << " destroyed" << endl;
    }
};

int main() {
  Rectangle Rect;
  Rect.setWidth(5);
  Rect.setHeight(7);
  // Print the area of the object.
  cout << "Total area: " << Rect.getArea() << endl;
  Rectangle Rect2;
  Rect2.setWidth(3);
  Rect2.setHeight(4);
}