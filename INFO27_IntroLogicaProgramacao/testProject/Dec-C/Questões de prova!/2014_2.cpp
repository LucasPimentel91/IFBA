#include<stdio.h>

int main(){
	
	int h1, h2, m1, m2, horaT, minT;
	int acresc, acrescM, soma;
	
	printf("Horario de entrada (primeiro a hora e os minutos depois): ");
	scanf("%d%d", &h1, &m1);
	printf("\nHorario de saida (mesma orientacao): ");
	scanf("%d%d", &h2, &m2);
	
	horaT= h2 - h1;
	minT= m2 - m1;
	
	
	if(minT>=60){
		acresc= minT/60;
		acrescM= minT%60;
		horaT += acresc;
		minT = acrescM;
		printf("Tempo da aula %d:%d", horaT, minT);
	}else if(minT<0){
		soma= horaT*60;
		soma += minT; horaT= soma/60; minT= soma % 60;
		printf("Tempo de aula %d:%d", horaT, minT);
	}else{printf("Tempo de aula %d:%d", horaT, minT);}
	
}