#include <stdio.h>

int main(void){

    int x;
    char copo;
    int copos[3] = {0};
    scanf("%i", &x);
    getchar();
    scanf("%c", &copo);
    getchar();
    if(copo == 'A'){
        copos[0] = 1;
    }
    else if(copo == 'B'){

        copos[1] = 1;
    }
    else{
        copos[2] = 1;
    }
    int aux;
    int movimento;
    for (int i = 0; i < x; i++){
        
        scanf("%i", &movimento);
        getchar();
        if (movimento == 1){
            aux = copos[0];
            copos[0] = copos[1];
            copos[1] = aux;
        }
        else if (movimento == 2){
            aux = copos[1];
            copos[1] = copos[2];
            copos[2] = aux;
        }
        else{
            aux = copos[2];
            copos[2] = copos[0];
            copos[0] = aux;
        }
    }

    if (copos[0] == 1){
        printf("A\n");
    }
    else if (copos[1] == 1){
        printf("B\n");
    }
    else{
        printf("C\n");
    }

}