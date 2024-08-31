#include<stdio.h>

int main(){
	
	int n, resto, multi;
	int soma=0;
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	if(n>0){
		for(int a=1;a<n + 1;a++){
			resto=n%a;
			if(resto==0){
				soma+=a;
			}
		}
		multi=n*2;
		if(soma>multi){
			printf("\n%d e abundante!!!", n);
		}else{printf("\n%d nao e abundante!!!", n);}
	}else{printf("\nEsse numero nao e abundante!!!");}
		
}