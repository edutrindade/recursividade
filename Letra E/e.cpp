#include <iostream>
#include <windows.h>

using namespace std;

string inverte(string s)
{
    if (s.length() == 1)
    {
        return s;
    }
    else
    {
        return s[s.length() - 1] + inverte(s.substr(0, s.length() - 1));
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    string s;

    cout << "Digite uma palavra: ";
    cin >> s;

    cout << "Palavra invertida: " << inverte(s) << endl;

    cout << endl;
    return 0;
}