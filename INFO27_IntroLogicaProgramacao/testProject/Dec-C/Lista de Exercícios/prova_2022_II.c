#include<stdio.h>

int main(){
	
	int acm, casas, num, casas2;
	
	
	printf("Digite o numero ACM: ");
	scanf("%d", &acm);
	num=acm;
	do{
		num/=10;
		casas++;
	}while(num>0);
	casas2=casas;
	
	int fator[casas], multi, div=1, n, b;
	multi=casas;
	do{
		div*=10;
		multi-=1;
	}while(multi!=1);
	for(int a=0;a<casas;a++){
		fator[a]=acm/div;
		n=casas;
		b=n;
		while(b!=1){
			b-=1;
			n*=b;
		}
		fator[a]*=n;
		acm=acm%div;
		div/=10;
		casas--;
	}
	
	int soma=0;
	for(int c=0;c<casas2;c++){
		soma+=fator[c];
	}
	
	printf("\n\nO decimal desse numero ACM e: %d", soma);
	
}