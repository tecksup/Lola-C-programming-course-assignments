//  third program in c++

//declaring the
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
  //Define the variables
  int Input;
  srand(time(NULL));
  int num = rand() % 100 + 1; //generates a number from 1 - 100
  bool correct = false;

  //Askes the user
  cout << "Can you guess my favorite number (1 - 100): "; // Text output
  while(correct == false) {
  cin >> Input; //User Input
    if (Input == num) { //If they guess correctly
      cout << "You did it, You guessed right!" << endl;
      correct = true;
      break;
    } else {
      if (Input == 0) { //for debuging if its was trully random
        cout << "Give up? I was thinking of ";
        cout << num; // Text output
        cout << "!" << endl;
      }
      else {
        if (Input < num) { // if its too low
            cout << "Too low. Keep guessing!" << endl;
        }
        else {
          if (Input > num) { // if its to high
            cout << "Too high. Keep guessing!" << endl;
          }
        }
      }
    }
  }
  return(1);
}
