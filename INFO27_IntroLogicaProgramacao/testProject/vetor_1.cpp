#include<stdio.h>

int main(){
	
	int A[6], soma;
	
	
	for(int i=0;i<6;i++){
		printf("Digite os valores informados: \n");
		scanf("%d", &A[i]);
	}
	soma=A[0]+A[1]+A[5];
	printf("\nA soma dos vetores escolhidos e %d", soma);
	
	A[3]=100;
	printf("\n\nOs vetores: ");
	for(int o=0;o<6;o++){
		printf("\n%d", A[o]);
	}
}