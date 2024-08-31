#include<stdio.h>

int main(){
	
	int matriz[3][4];
	int matriz2[3][5];
	int soma=0, cont=0;
	int media=0;
	
	for(int a=0;a<3;a++){
		for(int b=0;b<5;b++){
			if(b<4){
			scanf("%d", &matriz[a][b], &matriz2[a][b]);	
			soma+=matriz[a][b];
			cont++;
			}else{
			media=soma/cont;
			matriz2[a][b]=media;}	
		}
		soma=0;media=0;cont=0;
	}
	
	for(int c=0;c<3;c++){
		printf("\n");
		for(int d=0;d<5;d++){
			printf("%d  ", matriz2[c][d]);
		}
	}
	
}