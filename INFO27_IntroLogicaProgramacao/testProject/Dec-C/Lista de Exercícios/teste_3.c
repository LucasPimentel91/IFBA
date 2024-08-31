#include<stdio.h>

int main(){
	int n, resto, teste, div=10;
	int cont=0;
	scanf("%d", &n);
	
	do{
		resto=n%div;
		cont++;
		teste=n-resto;
		div*=10;
		
	}while(teste!=0);
	printf("%d", cont);
	
	int casa[cont];
	div=10;
	for(int a=1;a<=cont;a++){
		resto=n%div;
		
		casa[a]=resto;
		n-=resto;
		div*=10;
		printf("\n%d", casa[a]);
	}
	
	
}