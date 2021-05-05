#include "render.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Render(int selection)
{
    switch (selection)
    {
    case 0:
    {
        system("cls");
        cout << "=========================================" << endl;
        cout << "=============SownATMSimulation===========" << endl;
        cout << "=========================================" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==  1. Dang nhap.                      ==" << endl;
        cout << "==  2. Dang ky tai khoan.              ==" << endl;
        cout << "==  3. Thoat.                          ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "=========================================" << endl;
        break;
    }
    case 1: //select Dang Nhap
    {
        cout << "=========================================" << endl;
        cout << "=============SownATMSimulation===========" << endl;
        cout << "=========================================" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==   Vui long nhap id va password      ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "==                                     ==" << endl;
        cout << "=========================================" << endl;
        break;
    }
    default:
    {
        cout << "selection not found" << endl;
        break;
    }
    }
}