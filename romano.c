#include <stdio.h>

int main(void){
    int num;
    scanf("%i", &num);

    char *unidades[] = {"\0", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char *dezenas[] = {"\0","X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *centenas[] = {"\0","C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    if (num > 99){
        int centena = num / 100;
        printf("%s", centenas[centena]);
        num = num % 100;
    }
    if (num > 9){
        int dezena = num / 10;
        printf("%s", dezenas[dezena]);
        num = num % 10;
    }
    if (num > 0){
        int unidade = num;
        printf("%s", unidades[unidade]);
    }
}