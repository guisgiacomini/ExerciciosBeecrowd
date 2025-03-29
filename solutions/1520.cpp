//1520 - Parafusos e Porcas
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> prateleira;
        for (int i = 0; i < n; i++) {
            int num1, num2; cin >> num1 >> num2;
            for (;num1 <= num2; num1++) prateleira.push_back(num1);
        }

        sort(prateleira.begin(), prateleira.end());

        int vSize = prateleira.size();
        int achar; cin >> achar;
        int achoul = false;
        
        int l, r;
        for (int i = 0; i < vSize; i++) {
            if (prateleira[i] == achar) {
                if (!achoul) {
                    l = i; achoul = true; r = l;
                }
                else {
                    r = i;
                }
            }
        }

        if (achoul) {
            cout << achar << " found from " << l << " to " << r << endl;
        }
        else cout << achar << " not found" << endl;
    }

    return 0;
}