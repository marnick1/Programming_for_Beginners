#include <iostream>
using namespace std;

class Party {
  protected: 
    string unitType;
    string countries;
    int unitCount;
    struct {
      string defenseType[6] = {"Airplanes","Panzers","APCs","Anti-Aircraft","Turrets","Spuridon G. Mouroutsos"};
      int defenseCount[6] = {0};
      string weaponType[7] = {"Thompson", "MaschinenPistole40", "Machinengewehr42", "BAR M1918", "M1919MG", "GEWEHR 43", "FRAG"};
      int weaponCount[7] = {0};
    } firearms;
  public:
    Party(){}
    void printUnits(){
      cout << "Unit count: " << unitCount << endl;
      for (int i=0; i<6; i++){
        if (firearms.defenseCount[i]!=0){
          cout << firearms.defenseType[i] << ": " << firearms.defenseCount[i] << endl;
        }
      }
      for (int i=0; i<7; i++){
        if (firearms.weaponCount[i]!=0){
          cout << firearms.weaponType[i] << ": " << firearms.weaponCount[i] << endl;
        }
      }
    }
};

class Allies: public Party {
  private:
  
  public:
    Allies(string uType){
      // Allied countries
      countries= "USA\tUK\tFrance\tGreece\tUSSR";
      // Weapons
      if (uType=="battalion"){
        firearms.weaponCount[0]=250;
        firearms.weaponCount[1]=250;
      } else if (uType=="brigade"){
        firearms.weaponCount[0]=250;
        firearms.weaponCount[1]=250;
        firearms.weaponCount[2]=250;
        firearms.weaponCount[3]=250;
        firearms.weaponCount[4]=350;
        firearms.weaponCount[5]=350;
        firearms.weaponCount[6]=300;
      } else if (uType =="FighterPlanes"){
        firearms.defenseCount[0] = 20;
      } else if (uType =="Tanks"){
        firearms.defenseCount[1] = 40;
      } else if (uType =="Anti-Aircraft"){
        firearms.defenseCount[2]=80;
      } else if (uType =="APC"){
        firearms.defenseCount[3] = 100;
      }
       else if (uType =="sgmour"){
        firearms.defenseCount[5] = 100;
      }
      // unitCount
      unitCount = 0;
      for (int i=0; i<6; i++){
        unitCount += firearms.defenseCount[i];
      }
      for (int i=0; i<7; i++){
        unitCount += firearms.weaponCount[i];
      }
    }
    void printAllies(){
      cout << countries << endl;
    }
};

class Axis: public Party {
  private:

  public:
    Axis(string uType){
      // Axis countries  
      countries= "Germany\tJapan\tItaly\tTurkey\tAlbania";
      // Weapons
      if (uType=="battalion"){
        firearms.weaponCount[0]=150;
        firearms.weaponCount[1]=350;
      } else if (uType=="brigade"){
        firearms.weaponCount[0]=150;
        firearms.weaponCount[1]=350;
        firearms.weaponCount[2]=150;
        firearms.weaponCount[3]=350;
        firearms.weaponCount[4]=150;
        firearms.weaponCount[5]=350;
        firearms.weaponCount[6]=100;
      } else if (uType =="FighterPlanes"){
        firearms.defenseCount[0] = 30;
      } else if (uType =="Tanks"){
        firearms.defenseCount[1] = 30;
      } else if (uType =="Anti-Aircraft"){
        firearms.defenseCount[2]=70;
      } else if (uType =="APC"){
        firearms.defenseCount[3] = 100;
      }
       else if (uType =="sgmour"){
        firearms.defenseCount[5] = 110;
      }
      // unitCount
      unitCount = 0;
      for (int i=0; i<6; i++){
        unitCount += firearms.defenseCount[i];
      }
      for (int i=0; i<7; i++){
        unitCount += firearms.weaponCount[i];
      }
    }
};



int main(){
  Allies force1("battalion");
  Allies force2("brigade");
  Axis force69("sgmour");
  force2.printUnits();
}