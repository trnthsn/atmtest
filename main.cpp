#include <iostream>
#include <vector>
#include <Windows.h>
#include "account.h"
#include "render.h"
#include "login.h"
using namespace std;

vector<string> listData;

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
                getListData(listData);
                cout << "Nhap id" << endl;
                getline(cin, id);
                if (checkIDAppear(id, listData) == true)
                {
                    cout << "Nhap pass" << endl;                    
                    getline(cin, password);
                    if (checkPassword(id, password, listData))
                    {
                        cout << boolalpha << "true";
                    }
                    cout << listData.size();
                }
                else
                {
                    choose = 2;
                }
                    cin >> select;
                
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