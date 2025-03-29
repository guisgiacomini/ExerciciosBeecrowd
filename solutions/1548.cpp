//1548 - Fila do Recereio
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int m; cin >> m;
        vector<int> alunos(m);
        for (int i = 0; i < m; i++) cin >> alunos[i];
        vector<int> alunosDps = alunos;
        sort(alunosDps.begin(), alunosDps.end());
        reverse(alunosDps.begin(), alunosDps.end());
        int nTrocou = 0;

        for (int i = 0; i < m; i++) {
            if (alunos[i] == alunosDps[i]) nTrocou++;
        }

        cout << nTrocou << endl;
    }  

    return 0;
}

