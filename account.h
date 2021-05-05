#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <fstream>
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

void getListAccount(vector <Account> listAccount);

long long convertStringToNumber(const string &s);


#endif //LOGIN_H
