#include<stdio.h>
#define MAX 100

int main(){
	
	int venda[MAX], soma=0, b=1;
	printf("Informe a sequencia de numeros: ");
	for(int a=0;a<MAX;a++){
		scanf("%d", &venda[a]);
		if(venda[a]<0){
			a=100;
		}
	}
	
	for(int c=0;c<MAX;c++){
		if(venda[c]<0){
			c=100;
		}else if(venda[c]==0){
			soma-=venda[c-b];
			b+=2;
		}else{
			soma+=venda[c];
			b=1;
		}
	}
	printf("\n\nA soma das vendas foi: %d", soma);
}