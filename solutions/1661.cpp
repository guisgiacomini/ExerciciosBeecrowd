//1661 - Comércio de Vinhos na Gergóvia
#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

int main() {
    int n = -1;
    while (true) {
        cin >> n;
        if  (n == 0) break;
        else {
        vector <pair<int, int>> negativos;
        vector <pair<int, int>> positivos;
        lli passos = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num > 0) positivos.push_back({num, i});
            else negativos.push_back({num, i});
        }

        int it = 0;
        for (int i = 0; i < positivos.size(); i++) {
            while(positivos[i].first > 0) {
                if (negativos[it].first != 0) { 
                    positivos[i].first--;
                    negativos[it].first++;
                    passos += abs(negativos[it].second - positivos[i].second);
                }
                else {
                    it++;
                }
            }
        }
        


        cout << passos << endl;
    }

    } 

    return 0;
    
}