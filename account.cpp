#include "account.h"
#include <fstream>
#include <iomanip>
#include <iostream>
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

void getListAccount(vector<Account> &listAccount)

{
    int i = 0;
    int n;
    string s;
    ifstream file("dataBase.txt");
    file >> n;
    string *temp = new string[5 * n];
    getline(file, s);
    while (!file.eof())
    {
        getline(file, temp[i]);
        i++;
    }
    // cout << i;
    for (int j = 1; j <= i; j *= 5)
    {
        string name = temp[j - 1];
        string id = temp[j - 1 + 1];
        string password = temp[j - 1 + 2];
        long long balance = convertStringToNumber(temp[j - 1 + 3]);
        long long wrongTime = convertStringToNumber(temp[j - 1 + 4]);
        Account temp(name, id, password, balance, wrongTime);
        listAccount.push_back(temp);
        // cout << name << endl << id << endl << password<<
        // endl << balance << endl << wrongTime;
    }
    delete []temp;
}

