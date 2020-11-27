//You can do this
class Box {
  public:
    double height;    // Height of a box
    double length;    // Length of a box
    double breadth;  // Breadth of a box
    double getVolume(){ // Inline
      return length * breadth * height;
    }
};
//or you can do this
class Box {
  public:
    double height;    // Height of a box
    double length;    // Length of a box
    double breadth;  // Breadth of a box
    double getVolume();
};
// Using the scope operator ::
double Box::getVolume(){
  return length * breadth * height;
}

