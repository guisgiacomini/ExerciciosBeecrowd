#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; i++){
        int num;
        scanf("%i", &num);
        int contador = 1;
        int soma = 0;
        while (contador < num){
            if (num % contador == 0){
                soma += contador;
            }
            contador++;
        }
        if (soma == num){
            printf("%i eh perfeito\n", num);
        }
        else{
            printf("%i nao eh perfeito\n", num);
        }

        

    }

}