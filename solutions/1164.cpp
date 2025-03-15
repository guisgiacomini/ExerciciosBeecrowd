//1164 - Número perfeito
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        int somaDivisores = 0;
        for (int i = 1; i < x; i++) {
            if (x % i == 0) somaDivisores+=i;
        }
        if (somaDivisores == x) cout << x << " eh perfeito" << endl;
        else cout << x << " nao eh perfeito" << endl;
    }
    return 0;
}