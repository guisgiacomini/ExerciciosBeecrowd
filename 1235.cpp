#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string entrada; 
    string subString1;
    string subString2;
    string saida;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {

        getline(cin, entrada);
        int txtLength = entrada.length();

        subString1 = entrada.substr(0, txtLength / 2);
        reverse(subString1.begin(), subString1.end());
        subString2 = entrada.substr(txtLength / 2, txtLength / 2);
        reverse(subString2.begin(), subString2.end());

        saida = subString1 + subString2;

        cout << saida << endl;
    } 

    return 0;
}