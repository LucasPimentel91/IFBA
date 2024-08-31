#include <stdio.h>
 
int main() {
 
    int digt, num, cont=0;
    int base=10;
    printf("Digite o numero negociado: ");
    scanf("%d", &num);
    printf("Digite o numero incorreto: ");
    scanf("%d", &digt);
    //Quantidade de casas:
    do{
        if(num/base>=0){
            cont++;
        }
        base*=10;
    }while(num/base>0);
    //Separando as casas:
    int casas[cont];
    for(int a=0;a<cont;a++){
        casas[a]=num/base;
        num%=base;
        base/=10;
    }
    //Imprimindo somente os numeros sem erros:
    printf("\n\nValor original: ");
    for(int b=0;b<cont;b++){
        if(casas[b]!=digt){
            printf("%d", casas[b]);
        }
    }
    
 
    return 0;
}
