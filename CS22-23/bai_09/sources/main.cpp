#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int s = 1;
    cout << "Nhap n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s *= i;
    }
    cout << "T(n)= " << s;
    return 0;
}