    #include <iostream>
    #include <string>

    using namespace std;
    string decodifica(string entrada);

    int main(void){
        int c;
        string entrada;
        string saida;
        cin >> c;
        for(int i = 0; i < c; i++){
            cin >> entrada;
            saida = decodifica(entrada);
            cout << saida << endl;
        }
    }

    string decodifica(string entrada){
        string saida = "";
        for(int i = 0; i < entrada.length(); i++){
            if (islower(entrada[i])){
                saida = entrada[i] + saida;
            }
        }
        return saida;


    }

