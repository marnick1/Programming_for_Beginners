#include <iostream>
using namespace std;

main(){
  int min = 999999;
  int max = -999999;
  int input = 0;
  cout << "Give your inputs: " << endl;
  cin >> input;
  while (input != -999){
    if (input>-500 && input<500){
      min = (min < input) ? min : input;
      max = (max > input) ? max : input;
    }
    else{
      cout << "Number out of range, ignored." << endl;
    }
    cin >> input;
  }
  cout << "The largest number was: " << max << endl;
  cout << "The smallest number was: " << min << endl;
}

