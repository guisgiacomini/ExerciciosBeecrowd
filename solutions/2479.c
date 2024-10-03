#include <stdio.h>
#include <string.h>


int main(void){
    int n;
    scanf("%i", &n);
    char nomes[n][20];
    int comportaram = 0;
    int n_comportaram = 0;
    char sinal;
    for(int i = 0; i < n; i++){
        scanf(" %c %s", &sinal, &nomes[i]);
        if(sinal == '+'){
            comportaram++;
        }
        else{
            n_comportaram++;
        }       
    }
    //BubbleSort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(nomes[j], nomes[j+1]) > 0) {
                char temp[20];
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j+1]);   
                strcpy(nomes[j+1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }
    printf("Se comportaram: %i | Nao se comportaram: %i\n", comportaram, n_comportaram);    

}   