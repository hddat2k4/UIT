#include <iostream>

using namespace std;

int main()
{
    int i, n;
    float s = 0;
    cout << "Nhap n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s = s + (float)(2 * i + 1) / (2 * i + 2);
    }
    cout << "S(n)= " << s;
    return 0;
}