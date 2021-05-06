#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"

using namespace std;
// long long convertStringToNumber(const string &s);
bool compare2string(const string &a, const string &b);
bool checkIDAppear(const string &ID, vector<string> &listData);
long long getAddressCustomer(const string &ID, vector <string> &listData);
bool checkPassword(const string &ID, const string &InputedPassword, vector <string> &listData);
bool checkCondition(const string &ID, vector<string> &listData);

#endif // LOGIN_H

