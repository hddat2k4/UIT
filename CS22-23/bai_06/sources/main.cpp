#include <iostream>

using namespace std;

int main()
{
    int i, n;
    float s = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s += 1. / i * (i + 1);
    }
    cout << "S(n)= " << s;
    return 0;
}
