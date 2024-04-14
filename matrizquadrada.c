#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    while (1){
        scanf("%i", &n);
        if (n == 0){
            return 0;
        }
        else{
        int i[n][n];
        for (int j = 0; j < n; j++){
            for (int x = 0; x <n; x++){
                i[j][x] = pow(2, (j + x));
            }
        }

        int t = i[n - 1][n - 1];
        int largura_maxima = 0;
        while(t > 0){
            t /= 10;
            largura_maxima++;
        }
        for(int row = 0; row < n; row++){
            for (int col = 0; col < n; col++){
                if (col == 0){
                    printf("%*d", largura_maxima, i[row][col]);
                }
                else{
                     printf(" %*d", largura_maxima, i[row][col]);
                }
                
            }
            printf("\n");
        }
        printf("\n");
        }
    }
  
  
}
