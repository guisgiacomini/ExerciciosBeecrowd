//1104 - Troca de Cartas
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        set<int> alice; set<int> beatriz;
        
        for (int i = 0; i < a; i++) {
            int num; cin >> num;
            alice.insert(num);
        }

        int iguais = 0;

        for (int i = 0; i < b; i++) {
            int num; cin >> num;
            if (beatriz.find(num) == beatriz.end())
            {
                beatriz.insert(num);
                if (alice.find(num) != alice.end()) iguais++;            
            }
            
        }

        int trocas = min(alice.size(), beatriz.size()) - iguais;
        cout << trocas << endl;
    }

    return 0;
}