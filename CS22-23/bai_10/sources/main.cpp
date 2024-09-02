#include <iostream>

using namespace std;

int main()
{
    int i, n;
    float x, s = 1;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    while (i < n)
    {
        s *= x;
        i++;
    }
    cout << "T(n)= " << s;
    return 0;
}