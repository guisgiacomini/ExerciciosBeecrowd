//1245 - Botas Perdidas
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        map<string, pair<int, int>> calcados; //key guarda numero value pair.first qtd pé esquerda pair.second qtd pé direito
        for (int i = 0; i < n; i++) {
            string num; char pe;
            cin >> num >> pe;
            if (calcados.find(num) == calcados.end()) {
                if (pe == 'E') calcados[num] = {1, 0};
                else calcados[num] = {0, 1};
            }
            else {
                if (pe == 'E') calcados[num].first++;
                else calcados[num].second++;
            }
        }
        int output = 0;
        auto ptr = calcados.begin();
        for (; ptr != calcados.end(); ptr++) {
            while(ptr->second.first > 0 && ptr->second.second > 0) {
                output++;
                ptr->second.first--; ptr->second.second--;
            }
        }

        cout << output << endl;
    }
    return 0;
}