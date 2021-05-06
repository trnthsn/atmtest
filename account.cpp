#include "account.h"
#include "login.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

Account ::Account(string _fullName, string _id, string _password, long long _balance, long long _wrongTime)
{
    fullName = _fullName;
    id = _id;
    password = _password;
    wrongTime = _wrongTime;
    balance = _balance;
}

long long convertStringToNumber(const string &s)
{
    long long number = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i != s.size() - 1)
        {
            number += int(s[i]) - 48;
            number *= 10;
        }
        else
        {
            number += int(s[i]) - 48;
        }
    }
    return number;
}

void getListData(vector <string> &listData)
{
    fstream file;
    file.open("dataBase.txt");
    int n;
    string s;
    file >> n;
    getline(file, s);
    while (!file.eof())
    {
        getline(file, s);
        listData.push_back(s);
    }
}
