#include <stdio.h>
 
int main(){
 
    int n1, d1, n2, d2;
    char op;
    int numerador, denominador, simple, opera;
    
    printf("\nOperador: ");
    scanf("%c", &op);
    printf("Primeiro operando: ");
    scanf("%d%d", &n1, &d1);
    printf("\nSegundo operando: ");
    scanf("%d%d", &n2, &d2);
    
    
    switch(op){
        case '+':
            numerador= (n1*d2 + n2*d1);
            denominador= d1*d2;
            simple= numerador - denominador;
            printf("%d/%d", numerador, denominador);
            if(simple<0){
                simple*= -1;
                numerador/=simple;
                denominador/=simple;
                printf(" = %d/%d", numerador, denominador);
            }else if(simple==0){
                opera= 1;
                printf("%d/%d = %d", numerador, denominador, opera);
            }
            numerador/=simple;
            denominador/=simple;
            printf(" = %d/%d", numerador, denominador);
            break;
            
        case '-':
            numerador= (n1*d2 - n2*d1);
            denominador= d1*d2;
            simple= numerador - denominador;
            printf("%d/%d", numerador, denominador);
            if(simple<0){
                simple*= -1;
                numerador/=simple;
                denominador/=simple;
                printf(" = %d/%d", numerador, denominador);
            }else if(simple==0){
                opera= 1;
                printf("%d/%d = %d", numerador, denominador, opera);
            }
            numerador/=simple;
            denominador/=simple;
            printf(" = %d/%d", numerador, denominador);
            break;
            
        case '*':
            numerador= (n1*n2);
            denominador= d1*d2;
            simple= numerador - denominador;
            printf("%d/%d", numerador, denominador);
            if(simple<0){
                simple*= -1;
                numerador/=simple;
                denominador/=simple;
                printf(" = %d/%d", numerador, denominador);
            }else if(simple==0){
                opera= 1;
                printf("%d/%d = %d", numerador, denominador, opera);
            }
            numerador/=simple;
            denominador/=simple;
            printf(" = %d/%d", numerador, denominador);
            break;
            
        case '/':
            numerador= (n1/n2);
            denominador= d1/d2;
            simple= numerador - denominador;
            printf("%d/%d", numerador, denominador);
            if(simple<0){
                simple*= -1;
                numerador/=simple;
                denominador/=simple;
                printf(" = %d/%d", numerador, denominador);
            }else if(simple==0){
                opera= 1;
                printf("%d/%d = %d", numerador, denominador, opera);
            }
            numerador/=simple;
            denominador/=simple;
            printf(" = %d/%d", numerador, denominador);
            break;
            
        default: 
            printf("Operador desconhecido!!!");
    }
    
    return 0;
}