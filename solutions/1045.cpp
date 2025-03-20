//1045 - Tipos de Triângulos
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<float> pontos(3);
    for (auto &i: pontos) cin >> i;
    sort(pontos.begin(), pontos.end());
    float a = pontos[2], b = pontos[1], c = pontos[0];

    if (a >= b+c) cout << "NAO FORMA TRIANGULO";
    else if (pow(a, 2) == pow(b, 2) + pow(c, 2)) cout << "TRIANGULO RETANGULO";
    else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) cout << "TRIANGULO OBTUSANGULO";
    else cout << "TRIANGULO ACUTANGULO";

    cout << endl;

    if (a == b && a == c && b == c) cout << "TRIANGULO EQUILATERO" << endl;
    else if (a == b || a == c || b == c) cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}