//  first game in c++

//declaring the
#include <iostream>
#include <string>
using namespace std;

char spots[9]; // makes spots global variable

int Status() { //returns 1 if game tied. returns 0 if won. returns 2 if in progress

  //check player 1
  if (spots[0] == 'X' && spots[1] == 'X' && spots[2] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[3] == 'X' && spots[4] == 'X' && spots[5] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[6] == 'X' && spots[7] == 'X' && spots[8] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[0] == 'X' && spots[3] == 'X' && spots[6] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[1] == 'X' && spots[4] == 'X' && spots[7] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[2] == 'X' && spots[5] == 'X' && spots[8] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[6] == 'X' && spots[4] == 'X' && spots[2] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }
  if (spots[0] == 'X' && spots[4] == 'X' && spots[8] == 'X') {
    cout << "Congrats player 1, you win!" << endl;
    return 0;
  }

  //Check player 2
  if (spots[0] == 'O' && spots[1] == 'O' && spots[2] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[3] == 'O' && spots[4] == 'O' && spots[5] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[6] == 'O' && spots[7] == 'O' && spots[8] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[0] == 'O' && spots[3] == 'O' && spots[6] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[1] == 'O' && spots[4] == 'O' && spots[7] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[2] == 'O' && spots[5] == 'O' && spots[8] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[6] == 'O' && spots[4] == 'O' && spots[2] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }
  if (spots[0] == 'O' && spots[4] == 'O' && spots[8] == 'O') {
    cout << "Congrats player 2, you win!" << endl;
    return 0;
  }

  //checks for a tie
  if (spots[0] != '1' && spots[1] != '2' && spots[2] != '3' && spots[3] != '4' && spots[4] != '5' && spots[5] != '6' && spots[6] != '7' && spots[7] != '8' && spots[8] != '9') {
    return 1;
  }
return 2;
}

void UpdateBoard() {
  cout << "+---+---+---+" << endl;
  cout << "| " << spots[0] << " | " << spots[1] << " | " << spots[2] << " |" << endl;
  cout << "+---+---+---+" << endl;
  cout << "| " << spots[3] << " | " << spots[4] << " | " << spots[5] << " |" << endl;
  cout << "+---+---+---+" << endl;
  cout << "| " << spots[6] << " | " << spots[7] << " | " << spots[8] << " |" << endl;
  cout << "+---+---+---+" << endl;
}

void UpdateArray(int spot, int who) {
  if (who == 1) {
    if (spots[spot - 1] != 'X' && spots[spot - 1] != 'O') { //check if the spot has been used
      spots[spot - 1] = 'X';
    }
    else {
        cout << "That space has been used already, choose again" << endl;
    }
  }
  else {
    if (spots[spot - 1] != 'X' && spots[spot - 1] != 'O') { //check if the spot has been used
      spots[spot - 1] = 'O';
    }
    else {
        cout << "That space has been used already, choose again" << endl;
    }
  }
}

int main()
{
  //Define the variables
  bool Completed = false;
  int Input;
  bool test = false;
  spots[0] = '1';
  spots[1] = '2';
  spots[2] = '3';
  spots[3] = '4';
  spots[4] = '5';
  spots[5] = '6';
  spots[6] = '7';
  spots[7] = '8';
  spots[8] = '9';
  cout << "You know the rules of Tic Tac Toe, make a line of 3 to win." << endl;
  cout << "Type the number coresponding to the spot you want to choose." << endl;
  cout << "Typing anything other than numbers 1-9 will break the game" << endl;

  while (Completed == false) { // while the game has not been completed
    bool test = !test;
    //check the input and update array
    if (test == true) { //player 1 goes
      cout << "Player " << test + 1 << "'s turn" << endl;
      cout << "______________________________" << endl;
      UpdateBoard();
      while (true) {
        cin >> Input; //User Input
        if (spots[Input-1] != 'X' && spots[Input-1] != 'O') {
                 UpdateArray(Input, 1);
                 break;
        } else {
          cout << "That space has been used already, choose again" << endl;
        }
      }
    }
    else {
      cout << "Player " << test + 1 << "'s turn" << endl;
      cout << "______________________________" << endl;
      UpdateBoard();
      while (true) {
        cin >> Input; //User Input
        if (spots[Input-1] != 'X' && spots[Input-1] != 'O') {
                 UpdateArray(Input, 2);
                 break;
        } else {
          cout << "That space has been used already, choose again" << endl;
        }
      }
    }

    //run if statements
    if (Status() == 0) {
      //Update the display board and tell the users who won
      Completed = true;
      UpdateBoard();
      break;
    } else {
        if (Status() == 1) {
          cout << "You Tied!" << endl;
          break;
        }
      }
    }
  cout << "Restart program to play again!" << endl;
  return 0;
}
