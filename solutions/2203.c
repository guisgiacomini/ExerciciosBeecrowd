#include <stdio.h>
#include <math.h>

int main(void){
    int fiddle[2];
    int posicao_invasor[2];
    int v_invasor;
    int r_ult;
    int r_corvos;
    
    while (scanf("%i %i %i %i %i %i %i", 
                    &fiddle[0], &fiddle[1], 
                    &posicao_invasor[0], &posicao_invasor[1], 
                    &v_invasor, &r_ult, &r_corvos) != EOF) {
    
    
    float distancia = sqrt(pow((posicao_invasor[0] - fiddle[0]), 2) + 
    pow((posicao_invasor[1] - fiddle[1]), 2));

    float distancia_apos = distancia + (v_invasor * 1.5);

    if ((distancia_apos > (r_ult + r_corvos))) {
        printf("N\n");
    }
    else{
        printf("Y\n");
    }
    }
                    

    
}