#include <stdio.h>
 
int main() {
 
    int array, sub, resto;
    printf("Quantos casos testes: ");
    scanf("%d", &array);
    
    int num1[array], num2[array];
    for(int i=0;i<array;i++){
        printf("\nPrimeiro numero: ");
        scanf("%d", &num1[i]);
        printf("Segundo numero: ");
        scanf("%d", &num2[i]);
    }
    for(int a=0;a<array;a++){
       sub=num1[a]-num2[a];
       resto=sub%10;
       if(resto==0&&sub>=0){
          printf("\nCaso %d: encaixa", a + 1);
       }else{printf("\nCaso %d: nao encaixa", a + 1);}
    }
 
    return 0;
}
