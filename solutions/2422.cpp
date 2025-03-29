//2422 - Soma das Casas
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> casas(n);
    for (int i = 0; i < n; i++) cin >> casas[i];
    int soma; cin >> soma;

    int l = 0; int r = n-1;
    while (casas[l] + casas[r] != soma) {
        if (casas[l] + casas[r] < soma) l++;
        else if (casas[l] + casas[r] > soma) r--;
    }

    cout << casas[l] << " " << casas[r] << endl;
}