#include <bits/stdc++.h>

#define MAXN 12

using namespace std;

int main()
{
    float matriz[MAXN][MAXN];
    char o;
    int n = ((1 + (MAXN - 1)) * (MAXN - 1)) / 2;

    cin >> o;

    for (int i = 0; i < MAXN; i++)
    {
        for (int j = 0; j < MAXN; j++)
        {
            cin >> matriz[i][j];
        }
    }

    float soma = 0;

    for (int i = 0; i < MAXN; i++)
    {
        for (int j = 0; j < MAXN; j++)
        {
            if (i + j  >= MAXN)
            {
                soma += matriz[i][j];
            }
        }
    }

    if (o == 'S')
    {
        cout << fixed <<  setprecision(1) << soma << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << soma / n << endl;
    }

    return 0;

}