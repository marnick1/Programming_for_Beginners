#include "Quiz.hpp"
#include <iostream>
#include <windows.h>
using namespace std;

 int main() {
  //Initialize a handle to use for changing console attributes
  HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);

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
      SetConsoleTextAttribute(outcon, 15);
      cout << endl << "Q" << i+1 << " " << quiz[i].question;
      SetConsoleTextAttribute(outcon, 12);
      cout << "      X" << Multiplier;
      SetConsoleTextAttribute(outcon, 4);
      cout << "        YOUR SCORE     " << Score << endl;
      SetConsoleTextAttribute(outcon, 15);
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
        SetConsoleTextAttribute(outcon, 6);
        if (Lifes == 2){
          cout << "Warning " << Lifes << " Lifes remaining..." << endl;
        }
        else if (Lifes == 1){
          cout << "Warning " << Lifes << " Life remaining..." << endl;
        }
        else {
          SetConsoleTextAttribute(outcon, 5);
          cout << "GAME OVER" << endl;
          break;
        }
      }
    }

    SetConsoleTextAttribute(outcon, 4);
    cout << "TOTAL SCORE"<< endl << Score << endl;
    SetConsoleTextAttribute(outcon, 15);
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
