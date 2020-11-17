#include <iostream>
using namespace std;

struct fibonacci {
  int previousNumber;
  int currentNumber;
  void next(){
    currentNumber = previousNumber + currentNumber;
    previousNumber = currentNumber - previousNumber;
  }
  fibonacci(){
    previousNumber = 1;
    currentNumber = 0;
  }
  void print(){
    cout << currentNumber << endl;
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
