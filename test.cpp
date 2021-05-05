#include <iostream>
#include <fstream>
#include "account.h"
using namespace std;

vector <Account> listAccount;

int main()
{
    getListAccount(listAccount);
    cout << listAccount.size();
    // cout << convertStringToNumber("1234");

}
