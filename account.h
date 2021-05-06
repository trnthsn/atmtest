#ifndef LOGIN_H
#define LOGIN_H
#include "login.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

class Account
{
    string fullName, id, password;
    long long balance;
    int wrongTime;

public:
    Account(string _fullName, string _id, string _password, long long _balance, long long _wrongTime); // hàm khởi tạo mặc định Data khách hàng
};
long long convertStringToNumber(const string &s);
void getListData(vector<string> &listData);
bool compare2string(const string &a, const string &b);
bool checkIDAppear(const string &ID, vector<string> &listData);
#endif //LOGIN_H
