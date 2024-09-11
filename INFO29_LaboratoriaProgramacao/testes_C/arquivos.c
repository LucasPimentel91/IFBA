#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *out;
    out = fopen("arquivo.txt", "w");
    char caracter;
    scanf("%c", &caracter);
    while(caracter != '0'){
        fprintf(out, "%c", caracter);
        scanf("%c", &caracter);
    }
    fclose(out);
}