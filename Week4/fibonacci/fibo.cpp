#include <iostream>
using namespace std;

struct fibonacci {
  int previous;
  int current;
  void next(){
    current = previous + current;
    previous = current - previous;
  }
  fibonacci(){
    previous = 1;
    current = 0;
  }
  void print(){
    cout << current << endl;
  }
};

int main(){
  fibonacci fibo;
  fibo.print();
  for(int i=0;i<10;i++){
    fibo.next();
    fibo.print();
  }
}
