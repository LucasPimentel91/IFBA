#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
	
	char nome[MAX];
	char nome2[MAX];
	char palavra[MAX];
	gets(nome);
	int b=0, c=0, cont=0, e=0;
	
	for(int a=0;a<MAX;a++){
		cont=0;
		if(nome[a]==' '){
			b=a + 1;
			do{
				nome2[a]=nome[b];
				a=b;
				b++;
				cont++;	
			}while(nome[b]!=' '&& nome[b]!='\0');
			if(c<cont){
				e=0;
				c=cont;
				a=a - cont;
				do{
					palavra[e]=nome2[a];
					e++;
					a++;
				}while(e<=cont);
			}
		}else{
			cont++;
			nome2[a]=nome[a];
			if(c<cont){
				e=0;
				c=cont;
				a=a - cont;
				do{
					palavra[e]=nome2[a];
					e++;
					a++;
				}while(e<=cont);
			}
		}
	}
	
	printf("Maior palavra: %s", palavra);
	
	
}