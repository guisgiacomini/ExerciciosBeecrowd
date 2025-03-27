//1340 - Eu Posso Adivinhas a Estrutura de Dados
#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n;
    while (cin >> n) {
        int qtd = 3;
        stack <int> pilha; 
        queue <int> fila;
        priority_queue <int> fila_prioridade;
        bool isStack = true; bool isQueue = true; bool isPQueue = true;
        for (int i = 0; i < n; i++) {
            int x1; int x2;
            cin >> x1 >> x2;
            if (x1 == 1) {
                pilha.push(x2); 
                fila.push(x2);
                fila_prioridade.push(x2);
            }
            else {
                if (fila.front() != x2 && isQueue == true) {
                    isQueue = false;
                    qtd--;
                    
                }
                else {
                    fila.pop();
                }

                if (pilha.top() != x2 && isStack == true) {
                    isStack = false;
                    qtd--;
                }
                else {
                    pilha.pop();
                }

                if (fila_prioridade.top() != x2 && isPQueue == true) {
                    isPQueue = false;
                    qtd--;
                }
                else {
                    fila_prioridade.pop();
                }
            }
        }

        if (qtd == 0) cout << "impossible" << endl;
        else if (qtd > 1) cout << "not sure" << endl;
        else if (isStack == true) cout << "stack" << endl;
        else if (isQueue == true) cout << "queue" << endl;
        else cout << "priority queue" << endl;
    }

    return 0;
}