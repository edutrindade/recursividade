#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
using std::string;

bool palindromo(string s)
{
    if (s.length() == 1 || s.length() == 0)
    {
        return true;
    }
    else
    {
        if (s[0] == s[s.length() - 1])
        {
            return palindromo(s.substr(1, s.length() - 2));
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    string s;

    cout << "Digite uma palavra ou frase e iremos verificar se trata-se de um palíndromo: ";
    cin >> s;

    if (palindromo(s))
    {
        cout << "Sim, é um palíndromo." << endl;
    }
    else
    {
        cout << "Não, não é um palíndromo." << endl;
    }

    cout << endl;
    return 0;
}