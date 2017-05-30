//  Second program in c++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Define the variables
  int Input;
  int Input1;
  int Input2;
  int RESult;
  int Again;
  bool Woot = true;


while (Woot == true) {
  //Askes what operation the user wants
  cout << "Choose between four operations (add, subtract, multiply, or divide) by entering 1, 2, 3, or 4 respectivly. " << endl; // Text output
  cin >> Input; //User Input
    if (Input == 1) { //ADDITION IF STATMENT
      cout << "Enter First Number: ";
      cin >> Input1;

      cout << "Enter Second Number: ";
      cin >> Input2;

      // Displays the equation in ADDITION
      RESult = Input1 + Input2;
      cout << Input1;
      cout << " + ";
      cout << Input2;
      cout << " is ";
      cout << RESult;
      cout << "." << endl;
    }

    if (Input == 2) { //SUBTRACTION
      cout << "Enter First Number: ";
      cin >> Input1;

      cout << "Enter Second Number: ";
      cin >> Input2;

      // Displays the equation in SUBTRACTION
      RESult = Input1 - Input2;
      cout << Input1;
      cout << " - ";
      cout << Input2;
      cout << " is ";
      cout << RESult;
      cout << "." << endl;
    }

    if (Input == 3) { // MULTIPLICATION
      cout << "Enter First Number: ";
      cin >> Input1;

      cout << "Enter Second Number: ";
      cin >> Input2;

      // Displays the equation in MULTIPLICATION
      RESult = Input1 * Input2;
      cout << Input1;
      cout << " * ";
      cout << Input2;
      cout << " is ";
      cout << RESult;
      cout << "." << endl;
    }

    if (Input == 4) { // DIVISION
      cout << "Enter First Number: ";
      cin >> Input1;

      cout << "Enter Second Number: ";
      cin >> Input2;

      // Displays the equation in DIVISION
      RESult = Input1 / Input2;
      cout << Input1;
      cout << " / ";
      cout << Input2;
      cout << " is ";
      cout << RESult;
      cout << "." << endl;
    }
      cout << "Type 2 to quit, or 1 to calculate again." << endl;
      cin >> Again;
      if (Again == 2) { // if they type 2
        Woot = false;
        break;
      }
      else { // if they type 1
        if (Again == 1) {
          cout << " "<< endl;
          Woot = true;
        }
      }
  }
  return(1);
}
