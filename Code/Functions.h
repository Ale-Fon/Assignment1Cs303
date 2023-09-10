#pragma once
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void getRow(ifstream &inFile, vector<vector<int>> &v, int input1, int input2);
void printRow(vector<vector<int>> &v, int input1, int input2);
void checkIndex(vector<vector<int>> &v, int index, int input1, int input2);
void changeIndexValue(vector<vector<int>> &v, int index, int input1, int input2,
                      int &tempNum);
void adding(vector<vector<int>> &v, int index, int newNum);
void deleting(vector<vector<int>> &v, int index, int size2);
void transforming(int index, int &input1, int &input2);
