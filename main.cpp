#include <iostream>
#include <vector>
#include <Windows.h>
#include "account.h"
#include "render.h"
#include "login.h"
using namespace std;

vector<Account> listAccount;

int main()
{
    bool running = true;
    while (running)
    {
        int defaultSelection = 0;
        int choose;
        Render(defaultSelection);
        cout << "Lua chon cua ban la: \n";
        fflush(stdin);
        cin >> choose;
        cin.ignore();
        if (choose == 1)
        {
            system("cls");
            Render(1);
            int select = 1;
            if (select == 1)
            {
                string id, password;
                cout << "Nhap id" << endl;
                getline(cin, id);
                cout << "Nhap pass" << endl;
                getline(cin, password);
                getListAccount(listAccount);

                cout << listAccount.size();

                if (select == 3)
                    running = false;
            }
            if (choose == 3)
                running = false;
            if (choose != 1 && choose != 2 && choose != 3)
            {
                system("cls");
                Render(defaultSelection);
                cout << "Vui long chon lai " << endl;
            }
        }
    }
}