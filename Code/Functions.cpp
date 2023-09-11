#include "Functions.h"

// this function wil help grab each of the rows in the file.
void getRow(ifstream &inFile, vector<vector<int>> &v, int input1, int input2) {
  vector<int> row;
  int temp;
  for (int i = 0; i < input2; i++) {
    row.clear();
    for (int j = 0; j < input1; j++) {
      inFile >> temp;
      row.push_back(temp);
    }
    v.push_back(row);
  }
}
// This function will help print the rows to the user.
void printRow(vector<vector<int>> &v, int input1, int input2) {
  for (int i = 0; i < input2; i++) {
    for (auto c = v[i].begin(); c != v[i].end(); c++) {
      cout << setw(5) << right << *c;
    }
    cout << endl;
  }
  cout << endl;
}
// This function will check the index inside the rows.
void checkValue(vector<vector<int>> &v, int value, int input1, int input2) {
  transforming(value, input1, input2);
  cout << "The value in the index " << value << " is " << v[input2][input1]
       << endl
       << endl;
}
// This function will change the index value of the array that the user inputs.
void changeValue(vector<vector<int>> &v, int value, int input1, int input2, int &tempNum) {
  transforming(value, input1, input2);
  int newIndex;
  cout << "What would you like to change this value into: ";
  cin >> newIndex;
  tempNum = v[input2][input1];
  v[input2][input1] = newIndex;
  cout << "The number " << tempNum << " is now " << newIndex << endl << endl;
}
// This function will help adding a new value to the row.
void adding(vector<vector<int>> &v, int value, int newValue) {
  v[value].push_back(newValue);
}
// This function will take away a value from a row.
void deleting(vector<vector<int>> &v, int value, int input) {
  for (int i = 0; i < input; i++) {
    for (auto c = v[i].begin(); c != v[i].end(); c++) {
      if (*c == value) {
        *c = 0;
        break;
      }
    }
    break;
  }
}
// This helps change other values in the rows according to what the user inputs.
void transforming(int value, int &input1, int &input2) {
  int x = 0;
  int y;
  int z;
  for (int i = 0; i < input2; i++) {
    for (int j = 0; j < input1; j++) {
      if (x == value) {
        y = i;
        z = j;
        break;
      }
      x++;
    }
    if (x == value) {
      break;
    }
  }
  input2 = y;
  input1 = z;
}
