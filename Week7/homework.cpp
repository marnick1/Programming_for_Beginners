#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

bool replay(){
  char replay;
  cout << "Press R to play again, E to exit" << endl;
  while (true){
    cin >> replay;
    if (replay == 'r' || replay == 'R'){
      return 1;
    }
    else if (replay == 'e' || replay == 'E'){
      cout << "Goodbye" << endl;
      return 0;
    }
  }
}


int main(){
  srand((unsigned)time(NULL));
  do {
    int score = 0;
    int lifes = 3;
    cout << "Game start, do the math:" << endl;
    do{
      int number1 = rand() % 1000;
      int number2 = rand() % 1000;
      int ans, correctAns;
      int action = rand() % 6;
      int roundScore;
      switch (action){
        case 0:
          cout << number1 << " + " << number2 << ": ";
          cin >> ans;
          correctAns = number1 + number2;
          roundScore = 1;
          break;
        case 1:
          cout << number1 << " - " << number2 << ": ";
          cin >> ans;
          correctAns = number1 - number2;
          roundScore = 2;
          break;
        case 2:
          number1 %= 31;
          number2 %= 31;
          cout << number1 << " * " << number2 << ": ";
          cin >> ans;
          correctAns = number1 * number2;
          roundScore = 4;
          break;
        case 3:
          number2 %= 21;
          cout << number1 << " / " << number2 << ": ";
          cin >> ans;
          correctAns = number1 / number2;
          roundScore = 5;
          break;
        case 4:
          number1 %= 21;
          number2 %= 6;
          cout << number1 << " ^ " << number2 << ": ";
          cin >> ans;
          correctAns = pow(number1,number2);
          roundScore = 8;
          break;
        case 5:
          number1 %= 11;
          cout << number1 << "! " << ": ";
          cin >> ans;
          correctAns = 1;
          for (int i = 1; i <= number1; ++i) {
            correctAns = correctAns*i;
          }
          roundScore = 10;
          break;
      }
      if (ans != correctAns){
        lifes--;
        cout << "Wrong answer, " << lifes << " lifes remaining.";
      } else {
        score += roundScore;
      }
    } while (lifes != 0);
    cout << "Game over, your score was " << score << endl;
  } while (replay());
}

