#include <iostream>
#include <windows.h>

using namespace std;

double somatorio(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + somatorio(n - 1);
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n;

    cout << "Calculando o somatório de 1 a N. Informe o valor de N: ";
    cin >> n;
    cout << "Somatório de 1 a " << n << ": " << somatorio(n) << endl;

    cout << endl;
    return 0;
}