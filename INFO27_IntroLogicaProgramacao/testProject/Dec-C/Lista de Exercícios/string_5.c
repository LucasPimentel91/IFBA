#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
	
	char nome[MAX];
	char nome2[MAX];
	gets(nome);
	int b=0;
	
	for(int a=0;a<MAX;a++){
		if(nome[a]==' '){
			b=a + 1;
			do{
				nome2[a]=nome[b];
				a=b;
				b++;	
			}while(nome[b]!=' '&& nome[b]!='\0');
		}else{
			nome2[a]=nome[a];
		}
	}
	
	printf("\nEditado: %s", nome2);
}