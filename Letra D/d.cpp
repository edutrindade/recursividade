#include <iostream>
#include <windows.h>

using namespace std;

int cont_digitos(int n)
{
    if (n / 10 != 0)
    {
        return 1 + cont_digitos(n / 10);
    }
    else
    {
        return 1;
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n = 1250;
    int r = cont_digitos(n);

    cout << r;

    cout << endl;
    return 0;
}