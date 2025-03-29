//1025 - Onde está o mármore?
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q; int caso=1;
    while (true) {
        cin >> n >> q;
        if (n == 0 && q == 0) break;
        vector<int> marmores(n);
        for (int i = 0; i < n; i++) cin >> marmores[i];
        sort(marmores.begin(), marmores.end());
        cout << "CASE# " << caso << ":" << endl;
        for (int i = 0; i < q; i++) {
            int num; cin >> num;
            bool achou = false;
            for (int j = 0; j < n; j++) {
                if (marmores[j] == num)
                {
                    cout << num << " found at " << j+1 << endl;
                    achou = true;
                    break;
                }
                
            }
            if (!achou)cout << num << " not found" << endl;
        }

        caso++;
    }
}