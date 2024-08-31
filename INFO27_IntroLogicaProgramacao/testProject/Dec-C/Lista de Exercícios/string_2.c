#include<stdio.h>
#include<string.h>

int main(){
	
	char nome[13], nome2[13];
	char b, c;
	c=12;
	gets(nome);
	for(int a=0;a<13;a++){
		nome2[c]=nome[a];
		c--;
	}
	for(int o=0;o<13;o++){
		printf("%c", nome2[o]);
	}
	
}