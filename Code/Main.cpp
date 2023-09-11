#include "Functions.h"

using namespace std;
int main() {
  ifstream inFile;
  // This string will ask the user to input the file that will be used.
  string inputFile;
  // These integers will come up in the program asking the user to input how
  // many numbers are in the row and how many row there is. Input2 will be used
  // to ask the user what they will want to do with the file. Then arraychoice
  // will be what they will change.
  char input2;
  int rowN, rows, arrayChoice, temp;
  // will be used for while loops.
  bool again = true;
  bool agains = true;
  vector<vector<int>> v;

  cout << "Start of assignment 1, please wait." << endl << endl;
  // asking the user to input file name.
  cout << "Please enter file name below" << endl;
  cin >> inputFile;
  cout << endl;
  // now will ask how many numbers are in the row and how many rows are there.
  cout << "Please enter the amount of numbers in each row: ";
  cin >> rowN;
  cout << endl;
  cout << "Now please enter the amount of rows in file: ";
  cin >> rows;
  cout << endl;

  // opens file that the user given.
  inFile.open(inputFile);
  if (!inFile.is_open()) {
    cout << "failed opening file, exiting program.\n";
    return 1;
  }

  getRow(inFile, v, rowN, rows);
  cout << "The rows will be shown below." << endl;
  printRow(v, rowN, rows);

  // Program will continue from here asking the user what they wanna do with the
  // program.
  while (again) {
    cout << "Do you want to make any changes? the options are below, if not "
            "you can enter q/Q to quit."
         << endl
         << endl;
    cout << "A) Find a index in a row." << endl;
    cout << "B) Change a value in a row." << endl;
    cout << "C) Add a new value into the row." << endl;
    cout << "D) Remove a value off a row." << endl;
    cout << "Q) quit program." << endl << endl;
    cout << "Please make your choice: ";
    cin >> input2;
    // I will use a switch statement to use the menu.
    switch (input2) {
    // This for checking and returning the index in the row.
    case 'a':
    case 'A':
      cout << "What index will you be using from the row: " << endl;
      cin >> arrayChoice;
      checkValue(v, arrayChoice, rowN, rows);
      again = true;
      break;
    case 'b':
    case 'B':
      // This changes the index in the row that the user entered.
      cout << "What index will you be using from the row: " << endl;
      cin >> arrayChoice;
      changeValue(v, arrayChoice, rowN, rows, temp);
      cout << "Here is how the new row looks!" << endl;
      printRow(v, rowN, rows);
      break;
    case 'c':
    case 'C':
     // This will add a new value to a row which the user entered.
      //try{
        cout << "Which row would you like to add the new value to (ex: 0 10 or 1 4): ";
        cin >> arrayChoice;
        int newValue;
        cin >> newValue;
        adding(v, arrayChoice, newValue);
        cout << "The brand new row is below!" << endl << endl;
        printRow(v, rowN, rows);
        break;
      //}
      //else{
        //throw error;
      //}
      //catch(int errors){
        //cout << "Cant seem to add" << errors << "Program will reset." << endl;
      //}
    case 'd':
    case 'D':
      // Helps removing a value from a row.
      cout << "What number did you want to remove from the row: ";
      cin >> arrayChoice;
      deleting(v, arrayChoice, rows);
      cout << "The brand new row with the removed row is below!";
      printRow(v, rowN, rows);
      break;
    case 'q':
    case 'Q':
      // Finally this quits the program, stopping and gives out the goodbye
      // message.
      cout << "Thank you for using this program! have a nice day.";
      again = false;
      break;
    }
  }
}
