#include<stdio.h>
#include<string.h>

int main(){
	
	char palavra1[10];
	char palavra2[10];
	
	gets(palavra1);
	gets(palavra2);
	
	int cont=0;
	
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			if(palavra1[a]==palavra2[b]){
				cont++;
			}
		}
	}
	if(cont>0){
		printf("palavra1 contem palavra2");
	}
	
}