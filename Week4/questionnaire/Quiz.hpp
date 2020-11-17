#ifndef QUIZ_H
#define QUIZ_H
#include <cstdlib>
#include <ctime>
#include <iostream>

const int MaxQuizSize = 19;

struct Quiz {
  std::string question;
  std::string answers[4];
  int correctAns;
};

static const Quiz str[MaxQuizSize] = {
  //  question                                                                            answers[0]                                              answers[1]                                        answers[2]                                                  answers[3]                                   correctAns
  { "The language computers understand is called",                                       "Assembly code",                                       "Source code",                                  "Machine code",                                              "Computer code",                                    2 },
  { "The compiler is responsible for",                                                   "Running code",                                        "Translating code",                             "Generating code",                                           "Saving our code",                                  1 },
  { "Libraries are added with",                                                          "$include ()",                                         "#include ()",                                  "#include <>",                                               "%include {}",                                      2 },
  { "The type of the main function is",                                                  "always int",                                          "always void",                                  "any type you want",                                         "none (the main doesn't have a type)",              0 },
  { "Which of the following outputs will compile",                                       "cout << 'Hello World';",                              "cout << \"Hello \" << \"World\";",             "cout << Hello World;",                                      "cout << \"Hello World\" endl;",                    1 },
  { "To get input from a keyboard, the command used is",                                 "cin <<",                                              "cin >>",                                       "cout <<" ,                                                  "cout >>",                                          1 },
  { "If A is true and B is false the statement (A&&B)||(!A||B)&&(A&&!B) will result in", "0",                                                   "1",                                            "compilation error",                                         "false",                                            0 },
  { "The appropriate variable type to store the number 235243 is",                       "int",                                                 "float",                                        "string",                                                    "bool",                                             0 },
  { "Which one will result in integer division",                                         "float/float",                                         "float/int",                                    "int/float",                                                 "int/int",                                          3 },
  { "Which one of the following will compile",                                           "for (i=0;i<10;i++)",                                  "for (i<10,int i=0,i++)",                       "for (int i=0;;i++)",                                        "for (int i=0,i<=10,i++)",                          2 },
  { "When a break command is executed inside a loop:",                                   "Move to the next iteration",                          "Complete the block, then exit",                "Exit immediately",                                          "Finish the program",                               2 },
  { "An if(true){//code} block will",                                                    "Cause compilation error",                             "Be ignored",                                   "Need an else block",                                        "Execute always",                                   3 },
  { "Which of the following statements is NOT true about arrays",                        "Arrays can be initialized at declaration",            "The element of an array can be used as index", "Arrays can be declared with a variable as length",          "An array can be declared with unspecified length", 3 },
  { "What variables do functions have access to",                                        "Only local variables",                                "All of them",                                  "Local variables and those passed as parameters",            "Local and global variables",                       3 },
  { "Which of the following statements IS true about structs",                           "Structs can be used instead of arrays",               "Structs are a kind of function",               "Structs define a variable type",                            "Structs use a dot(.) in their name",               2 },
  { "What will be the result of x = (a<b) ? a:b",                                        "Make x the max of a and b",                           "Make x the min of a and b",                    "If a is lees than b give x a random value between a and b", "Compiler error",                                   1 },
  { "The & is called",                                                                   "The address operator",                                "The reference operator",                       "The dereference operator",                                  "The conditional operator",                         0 },
  { "The command 'cout << *x;' will",                                                    "Print the value in the address the x is pointing to", "Print the address of x",                       "Print the address x is pointing to",                        "Throw a compilation error",                        0 },
  { "How many dimensions can an array have in c++",                                      "2",                                                   "256",                                          "As many as your RAM can handle",                            "Unlimited",                                        3 }
};

void fill(struct Quiz *myquiz, int size){

  if (size>MaxQuizSize){
    std::cout << "Can not create a quiz this big";
    return;
  }
  int arr[MaxQuizSize] = {};
  int RandomNumber;
  //Different seed based on computer time
  srand((unsigned) time(0));
  int i=0;
  while (i<size){
    RandomNumber = rand() % MaxQuizSize;
    if (arr[RandomNumber] == 0){
      myquiz[i] = str[RandomNumber];
      arr[RandomNumber] = 1;
      i++;
    }
  }

  return;
}
#endif
