#include<stdio.h>
#include<string.h>

int main(){
	
	int hexa;
	int cont=0;
	scanf("%x", &hexa);
	do{
		hexa/=10;
		cont++;
	}while(hexa%10==hexa);
	printf("%d", cont);
}