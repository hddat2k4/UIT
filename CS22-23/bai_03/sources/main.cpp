#include <iostream>

using namespace std;

int main()
{
    float n, s = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += 1. / i;
    }
    cout << "S(n)= " << s;
    return 0;
}
