#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int coordenadasX[5];
	int coordenadasY[5];
	int distance, shortcut, aux;
	
	coordenadasX[0]= -2; coordenadasY[0]= -1;
	coordenadasX[1]= 4;	coordenadasY[1]= 2;
	coordenadasX[2]= 4;	coordenadasY[2]= 0;
	coordenadasX[3]= 2;	coordenadasY[3]= 2;
	coordenadasX[4]= 8;	coordenadasY[4]= 6;
	 
	for (int i = 0; i < 5; i++) {
		
		int i_menor = i;
		for (int j = i + 1; j < 5; j++){
			if ( coordenadasX[j] <  coordenadasX[i_menor]){
				i_menor = j;
			}
		}
			
		aux =  coordenadasX[i];
		coordenadasX[i] =  coordenadasX[i_menor];
		coordenadasX[i_menor] = aux;
		aux = coordenadasY[i];
		coordenadasY[i] =  coordenadasY[i_menor];
		coordenadasY[i_menor] = aux;
	
	}		
	
	for(int a=0;a<5;a++){
		printf("(%d,%d), ", coordenadasX[a], coordenadasY[a]);
	}
	
}