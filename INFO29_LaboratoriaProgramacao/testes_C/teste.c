#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#define pi 3.141592

int QuadroPerf(int n){
    if(n < 0){
        printf("Numeros perfeitos nao sao negativos!!!");
        return 0;
    }else{
        for(int i=0;i<n;i++){
            if(i * i == n){
                return 1;
            }
        }
        return 0;
    }
}

float volumeEsfera(int r){
    for(int i=1;i<3;i++){
        r*=r;
    }
    return (4 * pi * r)/3;
}

int segundosTotal(int h, int m, int s){
    if(h >= 0 && m >= 0 && s >= 0){
        return (h * 3600) + (m * 60) + s;
    }
    return -1;
}

float conversaoTemp(int celsius){
    return ((9 * celsius) / 5)  + 32;
}

double getHipotenusa(double c1, double c2){
    for(int i=0;i<1;i++){
        c1*=c1;
        c2*=c2;
    }
    return sqrt(c1 + c2);
}

double volumeCilindroCircular(double raio, double altura){
    for(int i=0;i<1;i++){
        raio*=raio;
    }
    return pi * raio * altura;
}

double maior(double n1, double n2){
    if(n1>n2){
        return n1;
    }
    return n2;
}

int mediaAluno(int n1, int n2, int n3, char letra){
    if(letra == 'A'){
        return (n1 + n2 + n3) / 3;
    }else if(letra == 'P'){
        return ((n1*5) + (n2*3) + (n3*2)) / 10;
    }else{
        return 0;
    }
}

int somaAlgorismos(int n){
    if(n>0){
        int soma=0;
        while(n != 0){
            soma += n%10;
            n=n/10;
        }
        return soma;
    }
    printf("Numero invalido!");
    return 0;
}

double calculator(double n1, double n2, char simbol){
    switch(simbol){
        case '+':
        return n1 + n2;
        case '-':
        return n1 - n2;
        case '*':
        return n1 * n2;
        case '/':
        return n1 / n2;
        default:
        printf("Simbolo desconhecido!!!");
        return -1;
    }
}

typedef struct pessoa{
    char nome[100];
    char endereco[1000];
    char telefone[100];
}Pessoa;

void sortAlfabetica(Pessoa *registro, int quanti){
    for(int a=0;a<quanti;a++){

        int a_menor = a;
        for(int b=a+1;b<quanti;b++){
            if(registro[b].nome[0] < registro[a_menor].nome[0]){
                a_menor = b;
            }
        }
        Pessoa aux = registro[a];
        registro[a] = registro[a_menor];
        registro[a_menor] = aux;
    }
}
void imprimirPessoa(Pessoa registro[], int quanti){
    if(registro == NULL){
        printf("Array inexistente!");
    }else{
        sortAlfabetica(registro, quanti);
        for(int i=0;i<quanti;i++){
            printf("Nome: %s\n", registro[i].nome);
            printf("Endereco: %s\n", registro[i].endereco);
            printf("Telefone: %s\n\n", registro[i].telefone);
        }
    }
}
void getPessoa(Pessoa registro[], int quanti){
    if(registro == NULL){
        printf("Array inexistente!");
    }else{
        for(int i=0;i<quanti;i++){
            scanf("%s", registro[i].nome);
            getchar();
            scanf("%s", registro[i].endereco);
            getchar();
            scanf("%s", registro[i].telefone);
            getchar();
        }
    }
}




int main(){
    /*printf("%d", QuadroPerf(-5)==1);
    printf("Volume de raio 3: %2.f", volumeEsfera(3));
    printf("%d", segundosTotal(1, 1, 60));
    printf("%.1lf", calculator(5, 10, '/'));*/
    Pessoa registro[5];
    int quanti = 5;
    getPessoa(registro, quanti);
    imprimirPessoa(registro, quanti);
}