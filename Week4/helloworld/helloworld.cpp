#include <iostream>
using namespace std;

void foo(int a){
  cout << a << endl;
}

int main(){
  int x = 5;
  foo(x);
  int *xx = &x;
  cout << *xx << endl;
  int arr[4] = {1,2,3,4};
  cout << "Hello world!" << endl;
}
