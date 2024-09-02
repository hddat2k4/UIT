#include <iostream>

using namespace std;

int main()
{
    int soao;
    do
    {
        cout << "Nhap so ao ban mua: ";
        cin >> soao;
        if (soao < 1)
        {
            cout << "So ao khong hop le! Vui long nhap lai! ";
        }
    } while (soao < 1);
    switch (soao)
    {
    case 1:
        cout << "Tong tien 1 cai ao la 50000VND";
        break;
    case 2:
        cout << "Tong tien 2 cai ao la 90000VND";
        break;
    case 3:
        cout << "Tong tien 3 cai ao la 120000VND";
        break;
    default:
        int sotien = soao * 35000;
        cout << "Tong tien " << soao << "cai ao la " << sotien << "VND va quy khach duoc tang kem 1 doi tat";
        break;
    }
    return 0;
}