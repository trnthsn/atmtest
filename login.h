#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"

using namespace std;

bool CheckAccount(string id, string password, vector <Account> &listAccount);
bool CheckAppear(string id, string password, vector <Account> &listAccount);

#endif // LOGIN_H

