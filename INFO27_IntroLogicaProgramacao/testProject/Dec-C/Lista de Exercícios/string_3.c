#include<stdio.h>
#include<string.h>

int main(){
	
	char letras[10];
	char caractere;
	int cont=0;
	
	gets(letras);
	scanf("%c", &caractere);
	for(int a=0;a<10;a++){
		if(letras[a]==caractere){
			cont++;
		}
	}
	printf("Vezes de %c: %d", caractere, cont);
}