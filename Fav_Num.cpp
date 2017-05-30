//  Second program in c++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Define the variables
  int Input;
  int RESult;

  //Askes the user
  cout << "Can you guess my favorite number (1 - 10): "; // Text output
  cin >> Input; //User Input

  if (Input == 7) { //If they guess 7
    cout << "You did it, You guessed right!" << endl;
  } else {
    cout << "Aww, that wasn't correct. Restart the program and try again!" << endl;
  }
  return(1);
}
