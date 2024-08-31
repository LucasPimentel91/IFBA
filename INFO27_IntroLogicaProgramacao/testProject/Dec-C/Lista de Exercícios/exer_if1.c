#include<stdio.h>

int main(){
	int id[15];
	int x; 
	int cont= 0;
	
	for(int o=1;o<16;o++){
	printf("Digite uma idade: ");
	scanf("%d", &id[o]);	
	}	
	
	for(int a=1;a<16;a++){
		for(int b=2;b<16;b++){
			if(id[b]<id[b-1]){
				id[b-1]=x;
				id[b-1]=id[b];
				id[b]=x;
			}
		}
	}
	printf("O menor: %d\nO maior: %d", id[1], id[15]);
}