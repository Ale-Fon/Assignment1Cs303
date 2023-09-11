#pragma once
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void getRow(ifstream &inFile, vector<vector<int>> &v, int input1, int input2);
void printRow(vector<vector<int>> &v, int input1, int input2);
void checkValue(vector<vector<int>> &v, int value, int input1, int input2);
void changeValue(vector<vector<int>> &v, int value, int input1, int input2, int &tempNum);
void adding(vector<vector<int>> &v, int value, int newValue);
void deleting(vector<vector<int>> &v, int value, int size2);
void transforming(int value, int &input1, int &input2);
