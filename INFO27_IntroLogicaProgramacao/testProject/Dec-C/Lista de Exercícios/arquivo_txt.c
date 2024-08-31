#include<stdio.h>
#include<stdlib.h>
#define max 20

int main(){
  FILE *input;
  char nome[max];
  input = fopen("arquivo.txt", "w");
  if(input == NULL){
    printf("Erro ao abrir o arquivo\n");
  }else{
  	fgets(nome, max, input);  
    fprintf("\n"input);
  }
  fclose(input);
  
}