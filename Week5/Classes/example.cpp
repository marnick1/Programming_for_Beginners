#include <iostream>
using namespace std;

class uid{
  private:
    int ID;
  public: 
    string Name;
    // Constructors
    uid(int id){ // Parameter for ID
      ID = id;
    }
    uid(string name, int id = 0){ // Parameter for Name
      ID = id;            // Or parameter for Name + ID
      Name = name;
    }
    // Destructor
    ~uid(){
      cout << "Bye bye" << endl;
    }
};

main() {
  uid Student1(36);
  uid Student2("John Doe");
  uid Student2("Jane Doe", 54);
}

