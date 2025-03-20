//1182 - Coluna na Matriz
#include <bits/stdc++.h>

using namespace std;

int main() {
    int c; cin >> c;
    char t; cin >> t;
    float soma = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            float num; cin >> num;
            if (j == c) soma += num;
        }
    }

    cout << fixed << setprecision(1);
    if (t == 'S') cout << soma;
    else cout << soma / 12.0;
    cout << endl;

    return 0;
}