#include<iostream> 
using namespace std;
  
int fib(int n){
  int last = 1;
  int current = 0;
  for (int i=0; i<n; i++){
    current = last + current;
    last = current - last;
  }
  return current;
}

int main (){
  int n = 9;
  cout << fib(n) << endl;
}

