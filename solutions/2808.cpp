#include <bits/stdc++.h>

using namespace std;

#define MAXN 8

int main()
{
    string tabuleiro[MAXN][MAXN];
    int i = 0;

    for (char row = 'a'; row <= 'h'; row++)
    {   
        int j = 0;
        for (char col = '1'; col <= '8'; col++)
        {
            tabuleiro[i][j] = string(1,row) + string(1,col);
            j++;
        }
        i++;
    }

    string inicio;
    string fim;

    cin >> inicio;
    cin >> fim;
    
    int l = inicio[0] - 'a';
    int c = inicio[1] - '1';

    if (fim == tabuleiro[l + 1][c + 2] || fim == tabuleiro[l + 1][c - 2] ||
        fim == tabuleiro[l + 2][c + 1] || fim == tabuleiro[l + 2][c - 1] ||
        fim == tabuleiro[l - 1][c + 2] || fim == tabuleiro[l - 1][c - 2] ||
        fim == tabuleiro[l - 2][c + 1] || fim == tabuleiro[l - 2][c - 1] )
        {
            cout << "VALIDO" << endl;
        }
    else 
    {
        cout << "INVALIDO" << endl;
    }

    return 0;

}
