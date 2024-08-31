#include<stdio.h>

int main(){
	
	int n, b, c;
	
	printf("Digite o termo da sequencia: ");
	scanf("%d", &n);
	n++;
	int termo[n];
	
	for(int i=0;i<=n;i++){
		termo[0]=0;
		termo[1]=1;
		if(i==1){
			printf("%d, ", termo[i]);
		}else{
			b=i - 1;
			c=i - 2; 
			termo[i]=termo[b] + termo[c];
		}
	}
	for(int a=0;a<=n;a++){
		printf("%d, ", termo[a]);
	}
	
}