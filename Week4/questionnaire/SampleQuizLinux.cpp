#include "Quiz.hpp"
#include <iostream>
using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BRIGHTRED    "\u001b[38;5;196m"
#define YELLOW "\u001b[38;5;172m"
#define PURPLE "\u001b[38;5;129m"



 int main() {

  while (true){

    //Declare and initialize variables
    const int size = 10;
    int x = 50;
    int Lifes = 3;
    int Score = 0;
    int Multiplier = 1;
    int Streak = 0;
    int PlayerAns;
    char PlayerDecision;
    //initialize our quiz struct
    Quiz quiz[size];
    fill(quiz, size);

    for (int i = 0; i < size; i++) {
      //Print The questions
      //We use this command to change text colour
      //Here we reset to default colour
      cout << RESET;
      cout << endl << "Q" << i+1 << " " << quiz[i].question;
      cout << RED;
      cout << "      X" << Multiplier;
      cout << BRIGHTRED;
      cout << "        YOUR SCORE     " << Score << endl;
      cout << RESET;
      cout << "1." << quiz[i].answers[0] << endl;
      cout << "2." << quiz[i].answers[1] << endl;
      cout << "3." << quiz[i].answers[2] << endl;
      cout << "4." << quiz[i].answers[3] << endl;

      cin >> PlayerAns;
      //Check if the input is a number within range
      while (cin.fail() || (PlayerAns > 4 || PlayerAns < 1)){
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Please input a number from 1 to 4" << endl;
        cin >> PlayerAns;
      }

      //indexes start at 0, so we have to substract one from the input
      PlayerAns--;

      if (PlayerAns == quiz[i].correctAns){
        Score = Score + x * Multiplier;
        Streak++;
        if (Streak == 2){
          Multiplier = Multiplier*2;
          Streak = 0;
        }
      }
      else {
        Lifes--;
        Streak = 0;
        Multiplier = 1;
        cout << YELLOW;
        if (Lifes == 2){
          cout << "Warning " << Lifes << " Lifes remaining..." << endl;
        }
        else if (Lifes == 1){
          cout << "Warning " << Lifes << " Life remaining..." << endl;
        }
        else {
          cout << PURPLE;
          cout << "GAME OVER" << endl;
          break;
        }
      }
    }

    cout << BRIGHTRED;
    cout << "TOTAL SCORE"<< endl << Score << endl;
    cout << RESET;
    while (true) {
      cout << "Press R to play again, E to exit" << endl;
      cin >> PlayerDecision;
      if (PlayerDecision == 'r' || PlayerDecision == 'R'){
        break;
      }
      else if (PlayerDecision == 'e' || PlayerDecision == 'E'){
        cout << "Goodbye";
        return(0);
      }
    }
  }
}
