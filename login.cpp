#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"
using namespace std;

// so sánh 2 string xem có giống nhau không
bool compare2string(const string &a, const string &b)
{
    if (a.size() != b.size())
        return false;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

// kiểm tra xem ID có tồn tại trong cơ sở dữ liệu không
bool checkIDAppear(const string &ID, vector<string> &listData)
{
    int n = listData.size();
    for (int i = 1; i < n; i++)
    {
        if (i % 5 == 1)
        {
            if (compare2string(ID, listData[i]) == true)
                return true;
            else
                continue;
        }
    }
    return false;
}
long long getAddressCustomer(const string &ID, vector<string> &listData)
{
    int n = listData.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 1)
        {
            if (compare2string(ID, listData[i]))
                return i;
        }
    }
    return -1;
}
// kiểm tra xem password có nhập đúng hay không
bool checkPassword(const string &ID, const string &InputedPassword, vector<string> &listData)
{
    if (checkIDAppear(ID, listData))
    {
        int addressCustomerInDataBase = getAddressCustomer(ID, listData);
        if (compare2string(InputedPassword, listData[addressCustomerInDataBase + 1]) == false)
        {
            listData[addressCustomerInDataBase + 4] += 1;
            return false;
        }
        else
        {
            return true;
        }
    }
    else
        return false;
}
// kiểm tra tài khoản có bị khoá hay là không

bool checkCondition(const string &ID, vector<string> &listData)
{
    int addressCustomerInDataBase = getAddressCustomer(ID, listData);
    if (convertStringToNumber(listData[addressCustomerInDataBase + 4]) >= 6)
        return false;
    return true;
}
