#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char nome[10][10];
	char procura[10], cont=0;
	int u=0, o=0;
	
	for(int i=0;i<10;i++){
			gets(nome[i]);
	}
	printf("\nQual nome esta procurando: ");
	gets(procura);
	o=0;
	do{
		for(int a=0;a<10;a++){
			if(nome[o]==procura[a]){
				cont++;
			}	
		}
		if(cont==10){
			u=1;
		}else{u==0;o++;}
	}while(u==0);
	
	
	
}