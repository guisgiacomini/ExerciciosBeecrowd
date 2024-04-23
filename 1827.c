#include <stdio.h>

int main(void){
    int n;
    while(scanf("%i", &n) != EOF ){
        int matriz[n][n];
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                if((row == n / 2) && (col == n / 2)){
                    matriz[row][col] = 4;
                }
                else if((row >= n/3 && row < n - n/3) && (col >= n/3 && col < n-n/3)){
                    matriz[row][col] = 1;
                }
                else if(row == col){
                    matriz[row][col] = 2;
                }
                else if(col + row == n - 1){
                    matriz[row][col] = 3;
                }
                else{
                    matriz[row][col] = 0;
                }

                
            printf("%i", matriz[row][col]);

            
            }
            printf("\n");
        }
        printf("\n");

        
    }
}