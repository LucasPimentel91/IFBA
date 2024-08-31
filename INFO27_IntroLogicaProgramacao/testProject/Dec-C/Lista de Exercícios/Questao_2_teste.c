#include<stdio.h>
#define MAX 100

int main(){
	
	int mersenne[MAX];
	int a=0, multi, cont=0;
	int cont2=0;
	
	do{
		multi=1;
		for(int b=1;b<=a;b++){
			multi*=2;
		}
		if(a==0){
			mersenne[a]=0;
			a++;
		}else{
			mersenne[a]=multi - 1;
			a++;
			for(int c=0;c<=mersenne[a]/2;c++){
				if(mersenne[a]%c==0){
					cont2++;
				}
			}
			if(cont2==1){
				printf("%d,", mersenne[a]);
				cont++;
			}
		}
	}while(cont<20);
	
}