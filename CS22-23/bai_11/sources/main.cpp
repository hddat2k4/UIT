#include <iostream>

using namespace std;

int main()
{
    int a, s = 0, h = 1;
    cout << "Nhap n: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        h *= i;
        s += h;
    }
    cout << "S(n)= " << s;
    return 0;
}
