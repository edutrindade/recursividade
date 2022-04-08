#include <iostream>
#include <windows.h>

using namespace std;

int mult(int n, int m)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (n == 1)
        {
            cout << m;
        }
        else
        {
            cout << m << " + ";
        }
        return m + mult(n - 1, m);
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n, m;
    cout << "Calculando a multiplicação de N por M. \nN: ";
    cin >> n;
    cout << "M: ";
    cin >> m;
    cout << "\nMultiplicação de " << n << " por " << m << endl
         << "Somas Sucessivas: ";

    cout << " = " << mult(n, m) << endl;

    cout << endl;
    return 0;
}