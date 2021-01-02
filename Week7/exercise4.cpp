#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  srand((unsigned)time(NULL));
  int number1,number2,ans, correctAns;
  int score = -1;
  char replay;
  while (true){
    cout << "Game start, calculate the sums:" << endl;
    do{
      score++;
      number1 = rand() % 1000;
      number2 = rand() % 1000;
      int action = rand() % 2;
      switch (action){
        case 0:
          cout << number1 << " + " << number2 << ": ";
          cin >> ans;
          correctAns = number1 + number2;
          break;
        case 1:
          cout << number1 << " - " << number2 << ": ";
          cin >> ans;
          correctAns = number1 - number2;
          break;
      }
    } while (ans == correctAns);
    cout << "Game over, your score was " << score << endl;
    cout << "Press R to play again, E to exit" << endl;
    while (true){
      cin >> replay;
      if (replay == 'r' || replay == 'R'){
        score = -1;
        break;
      }
      else if (replay == 'e' || replay == 'E'){
        cout << "Goodbye" << endl;
        return 0;
      }
    }
  }
}


