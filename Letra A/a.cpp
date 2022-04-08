#include <iostream>
#include <windows.h>

using namespace std;

void dec_to_bin(int n)
{
    int x;
    if (n / 2 != 0)
    {
        int q;
        q = n / 2;
        dec_to_bin(q);
        cout << n % 2;
    }
    else
    {
        cout << n % 2;
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n;
    cout << "Número decimal para conversão: ";
    cin >> n;
    cout << "Número binário: ";
    dec_to_bin(n);

    cout << endl;
    return 0;
}