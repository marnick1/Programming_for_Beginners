#include <iostream>
using namespace std;

class Time{
private:
  unsigned int hours, minutes, seconds;
public:
  void setTime();
  void print();
  unsigned int Convert();
};

void Time::setTime(){
  cout << "Enter time:" << endl;
  cout << "Hours? ";
  cin>>hours;
  cout << "Minutes? ";
  cin>>minutes;
  cout << "Seconds? ";
  cin>>seconds;
  minutes += seconds/60;
  seconds %= 60;
  hours += minutes/60;
  minutes %= 60;
}

void Time::print(){
  cout << endl << "Time: " << endl;
  cout << hours << ":" << minutes << ":" << seconds << endl;
}

unsigned int Time::Convert(){
  return hours*3600+minutes*60+seconds;
}

int main(){
  Time T1;
  T1.setTime();
  T1.print();
  cout << "Time in seconds is: " << T1.Convert() << endl;
}