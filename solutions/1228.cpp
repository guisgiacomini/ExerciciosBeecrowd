//1228 - Grid de Largada
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    while(cin >> n) {
        vector <int> inicio(n);
        map<int, int> fim;
        for (int i = 0; i < n; i++) cin >> inicio[i];
        for (int i = 0; i < n; i++){ 
            int num; cin >> num;
            fim[num] = i;
        }
        int ultrapassagens = 0;
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (fim[inicio[j]] > fim[inicio[j+1]]) {
                    swap(inicio[j], inicio[j+1]);
                    ultrapassagens++;
                }
            }
        }   

        cout << ultrapassagens << endl;
    }

    return 0;
} 