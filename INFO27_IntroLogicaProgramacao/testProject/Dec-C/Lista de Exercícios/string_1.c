#include<stdio.h>
#include<string.h>

int main(){
	
	char palavra[15];
	int cont=0;
	
	gets(palavra);
	for(int a=0;a<15;a++){
		switch(palavra[a]){
			case 'a': cont++; break;
			case 'e': cont++; break;
			case 'i': cont++; break;
			case 'o': cont++; break;
			case 'u': cont++; break;
			default: break;	
		}
	}
	
	printf("Vogais: %d", cont);	
}