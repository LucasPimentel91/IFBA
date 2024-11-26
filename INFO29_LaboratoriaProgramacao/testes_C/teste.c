#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>
#define pi 3.141592


typedef struct no{
    int valor;
    struct no *dir;
    struct no *esq; 
}No;
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

int coeficiente(int km, int g){
    return km / g;
}

void conselho(int n){
    if(n<8){
        printf("VENDA O CARRO");
    }else if(n>8 && n<13){
        printf("ECONOMICO");
    }else{
        printf("SUPER ECONOMICO");
    }
}

int validaTriangulo(int a, int b, int c){
    if(a + b > c){
        if(a + c > b){
            if(b + c > a){
                return 1;
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

void tipoTriangulo(int a, int b, int c){
    if(validaTriangulo(a, b, c) == 0){
        printf("NAO E TRIANGULO");
    }else{
        if(a==b && a==c){
            printf("\nESSE TRIANGULO E EQUILATERO");
        }else if (a == b || a == c){
            printf("\nESSE TRINGULO E ISOSCELES");
        }else{
            if(b==c){
                printf("\nESSE TRIANGULO E ISOSCELES");
            }else{
                printf("\nESSE TRINGULO E ESCALENO");
            }
        }
    }
}

void DesenhaLinha(int n){
    if(n==1){
        printf("=");
    }else{
        printf("=");
        return DesenhaLinha(n - 1);
    }
}

int somaIntervalo(int n1, int n2){
    if(n1 < 0 && n2 < 0){
        printf("SOMENTE NUMEROS POSITIVOS");
        return 0;
    }
    if(n1 + 1 == n2){
        return 0;
    }else{
        int soma=0;
        for(int i = n1 + 1;i<n2;i++){
            printf("%d", i);
            soma += i;
        }
        return soma;
    }
}

int potencia(int base, int exp){
    int multi = base;
    for(int i=1;i<exp;i++){
        base *= multi;
    }
    return base;
}

int ehPrimo(int n){
    int cont=0;
    for(int i=n;i>0;i--){
        if(n%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        return 1;
    }else{
        return 0;
    }
}

int fatorPrimoMax(int n){
    for(int i=n;i>0;--i){
        if(n%i == 0 && ehPrimo(i)==1){
            return i;
        }
    }
    return 0;
}

void dobra_somar(int *p1, int *p2){
    int soma= *p1 + *p2;
    *p1 = soma;
}

void imprimirEndereco(float array[], int quanti){
    for(int a=0;a<quanti;a++){
        printf("%p\n", (void*)&array[a]);
    }
}

void imprimirEnderecoMatriz(float matriz[][3], int quanti){
    for(int i=0;i<quanti;i++){
        printf("\n");
        for(int a=0;a<3;a++){
            printf("%p\t", (void*)&matriz[i][a]);
        }
    }
}

/*

int array[5];
    int *ptr = array;
    for(int i=0;i<5;i++){
        scanf("%d", (ptr + i));
        printf("%d\t%d\n", *(ptr + i), (*(ptr + i)) * 2);
    }

*/

int quantiPrimos(int n){
    int cont=0;
    for(int i=1;i<n;i++){
        if(ehPrimo(i)==1){
            cont++;
        }
    }
    return cont;
}


void linhasExclamacao(int n){
    for(int a=1;a<=n;a++){
        int b=0;
        while(b != a){
            printf("!");
            b++;
        }
        printf("\n");
    }
}

void formarTriangulo(int largura){
    int altura = (2*largura)-1;
    for(int i=1;i<largura + 1;i++){
        int b=0;
        while(b != i){
            printf("*");
            b++;
        }
        printf("\n");
    }

    for(int i=altura/2;i>0;i = i - 1){
        int b=0;
        while(b != i){
            printf("*");
            b++;
        }
        printf("\n");
    }
}

//Prova I:
//1º Questão
void inverterData(char data[]) {
    int posi1 = 0, posi2 = 0;
    int quant = strlen(data);
    
    // Encontrar as posições dos separadores '/'
    for (int a = 0; a < quant; a++) {
        if (data[a] == '/') {
            if (posi1 == 0) {
                posi1 = a;
            } else if (posi2 == 0) {
                posi2 = a;
            }
        }
    }
    
    // Extração de dia, mês e ano
    char dia[3], mes[3], ano[5];
    
    strncpy(dia, data, posi1); // Copiar o dia
    dia[posi1] = '\0'; // Terminar a string com '\0'
    
    strncpy(mes, data + posi1 + 1, posi2 - posi1 - 1); // Copiar o mês
    mes[posi2 - posi1 - 1] = '\0';
    
    strcpy(ano, data + posi2 + 1); // Copiar o ano

    // Formatar a string invertida como AAAA/MM/DD
    snprintf(data, quant + 1, "%s/%s/%s", ano, mes, dia);
}

int isAcentuado(char c) {
    // Checa se o caractere está no intervalo dos acentuados na tabela ASCII estendida
    int num =c;
    return (num >= 192 && num <= 255);  // Intervalo aproximado para caracteres acentuados em ASCII estendido
}

void organizaCaracteresAcentuados(char *str){
    int n = strlen(str);
    char resultado[n + 1];  // Array para armazenar a string rearranjada
    int pos_acento = 0;     // Índice para os caracteres acentuados
    int pos_normal = 0;     // Índice para os demais caracteres

    // Iterar pela string e colocar os caracteres acentuados primeiro
    for (int i = 0; i < n; i++) {
        if (isAcentuado(str[i])) {
            resultado[pos_acento++] = str[i];  // Coloca o caractere acentuado no início
        }
    }

    // Preencher o restante com os caracteres não acentuados
    for (int i = 0; i < n; i++) {
        if (!isAcentuado(str[i])) {
            resultado[pos_acento + pos_normal++] = str[i];
        }
    }
    resultado[n] = '\0';  // Finalizar a nova string com o caractere nulo

    // Copiar o resultado de volta para a string original
    strcpy(str, resultado);
}

void prova(int *p){
int *c = p;
if(*c > 0){
*c=*c-1;
prova(c);
printf("c: %d\n", *c);
*p=*p-1;
prova(p);
printf("p: %d\n", *p);
}
}

int serieS(int n){
    if(n == 0){
        return 1;
    }else{
        int prod = n*n;
        return ((prod + 1)/n) + serieS(n - 1);
    }
}

long long fatorialExponencial(int n){
    if(n == 0){
        return 1;
    }else{
        return pow(n, fatorialExponencial(n - 1));
    }
}

int alturaTree(No *raiz){
    if(raiz==NULL){return 0;}
    else{
        int alt_esq = alturaTree(raiz->esq);
        int alt_dir = alturaTree(raiz->dir);

        if(alt_esq > alt_dir){return alt_esq + 1;}
        else{return alt_dir + 1;}
    }
}

int functionH(int m, int n){
    if(m == 1){return n + 1;}
    if(n == 1){return m + 1;}
    else{
        return functionH(m - 1, n) + functionH(m, n - 1);
    }
}

int main(){
    int n=3;
    int *m = &n;
    prova(m);
}