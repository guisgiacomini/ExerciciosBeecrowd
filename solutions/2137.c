#include <stdio.h>

int main(void){
    

    int n;
    while(scanf("%i\n", &n) != EOF){
        int livros[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &livros[i]);
        }
        //BubbleSort 
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++)
                if(livros[j] > livros [j+1]){
                    int temp = livros[j];
                    livros[j] = livros[j+1];
                    livros[j+1] = temp;
                }
            
        }
        for(int i = 0; i < n; i++){
            if(livros[i] / 1000 > 0){
                printf("%i\n", livros[i]);
            }
            else if(livros[i] / 100 > 0){
                printf("0%i\n", livros[i]);
            }
            else if(livros[i] / 10 > 0){
                printf("00%i\n", livros[i]);
            }
            else{
                printf("000%i\n", livros[i]);
            }
        }

    }
    
}