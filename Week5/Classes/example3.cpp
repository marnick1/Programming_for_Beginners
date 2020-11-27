class Box {
  private:
    double height;    // Height of a box
    double length;    // Length of a box
    double breadth;  // Breadth of a box
  public:
    // Constructor
    Box(double h=0, double l=0, double b=0);
    // Volume function
    double getVolume();
    // To access height
    void set_height(double h);
    double get_height();
    // To access length
    void set_length(double l);
    double get_length();
    // To acceess breadth
    void set_breadth(double b);
    double get_breadth();
};
// Constructor definition
Box::Box(double h=0.0, double l=0.0, double b=0.0){
  height  = (h<0) ? 0 : h;
  length  = (l<0) ? 0 : l;  // Some condition
  breadth = (b<0) ? 0 : b;
}
// Volume function
double Box::getVolume(){
  return length * breadth * height;
}
// Height getter/setter
void Box::set_height(double h){
  height  = (h<0) ? 0 : h;
}
double Box::get_height(){
  return height;
}
// Length getter/setter
void Box::set_length(double l){
  length  = (l<0) ? 0 : l;
}
double Box::get_height(){
  return length;
}
// Breadth getter/setter
void Box::set_breadth(double b){
  breadth  = (b<0) ? 0 : b;
}
double Box::get_breadth(){
  return breadth;
}

