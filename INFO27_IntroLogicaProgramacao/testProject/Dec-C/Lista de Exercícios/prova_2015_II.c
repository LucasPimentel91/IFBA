#include<stdio.h>

int main(){
	
	float alt1, alt2, ano=0;
	
	printf("Digite o tamanho em metros de Chico e Zé respectivamente: ");
	scanf("%f%f", &alt1, &alt2);
	
	do{
		alt1+=0.02;
		alt2+=0.03;
		ano+=1;
	}while(alt2<alt1);
	
	printf("Ze sera maior que chico depois de %2.f anos", ano);
		
}