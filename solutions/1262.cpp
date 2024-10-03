    //Nunca apanhei tanto para um exercício tão simples
    #include <iostream>
    #include <string>

    using namespace std;

    int main(void){
        
        string rastro;
        int p;

        while ((cin >> rastro)){
            cin >> p;
            int ciclos = 0;
           
            string sequencia = "";
            
        
            
            for(int i = 0; i < rastro.length(); i++){
                if(rastro[i] == 'W'){
                    ciclos++;
                }
                else{
                    sequencia += 'R';
                    if(rastro[i + 1] == 'W' || rastro[i + 1] == '\0'){
                        ciclos += (sequencia.length() / p);
                        if (sequencia.length() % p != 0){
                            ciclos++;
                        }
                        sequencia = "";
                    }
                }
            }

            cout << ciclos << endl;
        }

    }
