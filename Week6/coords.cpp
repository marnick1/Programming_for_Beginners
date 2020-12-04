#include <iostream>
using namespace std;
 
class Coordinates {
  private:
    float x;
    float y;
    float z;
  public:
    Coordinates(float u=0, float v=0, float w=0){
      x = u;  y = v;  z = w;
    }
    void print() {
      cout << "x= " << x << "\t" << "y= " ;
      cout << y << "\t" << "z= " << z << endl;
    }
    Coordinates operator+(const Coordinates &coord){
      Coordinates NewCoord;
      NewCoord.x = x + coord.x;
      NewCoord.y = y + coord.y;
      NewCoord.z = z + coord.z;
      return NewCoord;
  }
};

int main() {
  Coordinates point1(1, 2, 4);
  point1.print();
  Coordinates point2(3, 3, 3);
  point2.print();
  Coordinates point3;
  point3 = point1 + point2;
  cout << "point1 + point2:" << endl;
  point3.print();
}

