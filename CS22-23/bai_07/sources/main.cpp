#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float s = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s = s + float(i) / (i + 1);
    }
    cout << "S(n)= " << s;
    return 0;
}
