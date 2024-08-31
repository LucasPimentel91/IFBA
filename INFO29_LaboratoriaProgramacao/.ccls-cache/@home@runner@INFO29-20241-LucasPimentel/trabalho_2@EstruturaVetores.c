#include <stdio.h>
#include <stdlib.h>
#include "EstruturaVetores.h"
#define TAM 10
Vetor vetorPrincipal[TAM];

/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'

Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho deve ser maior ou igual a 1
*/


int ehPosicaoValida(int posicao){
    return (posicao >= 1 && posicao <= 10);
}
int criarEstruturaAuxiliar(int posicao, int tamanho)
{

    int retorno = 0;
    if (!ehPosicaoValida(posicao)){
        retorno = POSICAO_INVALIDA;
    }
    else if (tamanho <= 0){
        retorno = TAMANHO_INVALIDO;
    }
    else if (vetorPrincipal[posicao - 1].array != NULL){
        retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    }
    else{
        vetorPrincipal[posicao - 1].array = malloc(sizeof(int) * tamanho);
        
        if (vetorPrincipal[posicao - 1].array == NULL){
            retorno = SEM_ESPACO_DE_MEMORIA;
        }else{
            vetorPrincipal[posicao - 1].tamanho = tamanho;
            vetorPrincipal[posicao - 1].quantidade = 0;
            retorno = SUCESSO;
        }
    }

    return retorno;
}


/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{
    int retorno = 0;
    if (!ehPosicaoValida(posicao)) {
        retorno = POSICAO_INVALIDA;
    } else {
        if (vetorPrincipal[posicao - 1].array != NULL) {
            if (vetorPrincipal[posicao - 1].quantidade == vetorPrincipal[posicao - 1].tamanho) {
                retorno = SEM_ESPACO;
            } else {
                vetorPrincipal[posicao - 1].array[vetorPrincipal[posicao - 1].quantidade] = valor;
                vetorPrincipal[posicao - 1].quantidade++;
                retorno = SUCESSO;
            }
        } else {
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }
    return retorno;
}


/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica

Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)
{
      int retorno = 0;
      if (!ehPosicaoValida(posicao))
          retorno = POSICAO_INVALIDA;
      else
      {
          // testar se existe a estrutura auxiliar
          if (vetorPrincipal[posicao - 1].array != NULL)
          {
              if(vetorPrincipal[posicao - 1].quantidade == 0){
                   retorno = ESTRUTURA_AUXILIAR_VAZIA;
              }else{
                  --vetorPrincipal[posicao - 1].quantidade;
                  retorno = SUCESSO;
              }
          }
          else
          {
              retorno = SEM_ESTRUTURA_AUXILIAR;
          }
      }

      return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar

*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
    int retorno = 0;
    int encontrado = 0;  

    if (!ehPosicaoValida(posicao)) {
        retorno = POSICAO_INVALIDA;
    } else {
        if (vetorPrincipal[posicao - 1].array != NULL) {
            if (vetorPrincipal[posicao - 1].quantidade == 0) {
                retorno = ESTRUTURA_AUXILIAR_VAZIA;
            } else {
                for (int i = 0; i < vetorPrincipal[posicao - 1].quantidade; i++) {
                    if (vetorPrincipal[posicao - 1].array[i] == valor) {
                        for (int j = i; j < vetorPrincipal[posicao - 1].quantidade - 1; j++) {
                            vetorPrincipal[posicao - 1].array[j] = vetorPrincipal[posicao - 1].array[j + 1];
                        }
                        --vetorPrincipal[posicao - 1].quantidade;
                        retorno = SUCESSO;
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    retorno = NUMERO_INEXISTENTE;
                }
            }
        } else {
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }

    return retorno;
}


/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    int retorno = 0;

    if (!ehPosicaoValida(posicao)) {
        retorno = POSICAO_INVALIDA;
    } else {
        if (vetorPrincipal[posicao - 1].array != NULL) {
            int quantidade = vetorPrincipal[posicao - 1].quantidade;
            for (int i = 0; i < quantidade; i++) {
                vetorAux[i] = vetorPrincipal[posicao - 1].array[i];
            }

            retorno = SUCESSO;
        } else {
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }

    return retorno;
}


/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
void merge(int vetorAux[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++) {
        L[i] = vetorAux[inicio + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = vetorAux[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetorAux[k] = L[i];
            i++;
        } else {
            vetorAux[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vetorAux[k] = L[i];
        i++;
        k++;  
    }

    while (j < n2) {
        vetorAux[k] = R[j];
        j++;
        k++;  
    }
}


void mergeSort(int vetorAux[], int inicio, int fim){
    if(inicio < fim){
        int meio = (inicio + fim) / 2;
        mergeSort(vetorAux, inicio, meio);
        mergeSort(vetorAux, meio + 1, fim);
        merge(vetorAux, inicio, meio, fim);
    }    
}

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    int retorno = 0;

    if (!ehPosicaoValida(posicao)) {
        retorno = POSICAO_INVALIDA;
    } else {
        if (vetorPrincipal[posicao - 1].array != NULL) {
            int quantidade = vetorPrincipal[posicao - 1].quantidade;
            for (int i = 0; i < quantidade; i++) {
                vetorAux[i] = vetorPrincipal[posicao - 1].array[i];
            }
            mergeSort(vetorAux, 0, quantidade - 1);

            retorno = SUCESSO;
        } else {
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }

    return retorno;
}


/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
    int retorno = 0;
    int a = 0;
    int todasVazias = 1;  

    for (int i = 0; i < TAM; i++) {
        if (vetorPrincipal[i].quantidade > 0) {
            todasVazias = 0;  
            for (int x = 0; x < vetorPrincipal[i].quantidade; x++) {
                vetorAux[a] = vetorPrincipal[i].array[x];
                a++;
            }
        }
    }

    if (todasVazias) {
        retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
    } else {
        retorno = SUCESSO;
    }

    return retorno;
}


/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/


int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
    int retorno = 0;
    int a = 0;
    int todasVazias = 1;  

    for (int i = 0; i < TAM; i++) {
        if (vetorPrincipal[i].quantidade > 0) {
            todasVazias = 0;  
            for (int x = 0; x < vetorPrincipal[i].quantidade; x++) {
                vetorAux[a] = vetorPrincipal[i].array[x];
                a++;
            }
        }
    }

    if (todasVazias) {
        retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
    } else {
        mergeSort(vetorAux, 0, a - 1);
        retorno = SUCESSO;
    }

    return retorno;
}


/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1

Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
 
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho) {
    if (!ehPosicaoValida(posicao)) {
        return POSICAO_INVALIDA;
    }

    int pos = posicao - 1;
    int tamanhoAtual = vetorPrincipal[pos].tamanho;

    if (vetorPrincipal[pos].array == NULL) {
        return SEM_ESTRUTURA_AUXILIAR;
    }

    int novoTamanhoFinal = tamanhoAtual + novoTamanho;

    if (novoTamanhoFinal < 1) {
           return NOVO_TAMANHO_INVALIDO;
    }

    int *temp = realloc(vetorPrincipal[pos].array, novoTamanhoFinal * sizeof(int));
    if (temp == NULL) {
        return SEM_ESPACO_DE_MEMORIA;
    }

    vetorPrincipal[pos].array = temp;
    vetorPrincipal[pos].tamanho = novoTamanhoFinal;

    if (vetorPrincipal[pos].quantidade > novoTamanhoFinal) {
        vetorPrincipal[pos].quantidade = novoTamanhoFinal;
    }

        return SUCESSO;
}


/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.

Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/


int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{
    int retorno = 0;
    if (!ehPosicaoValida(posicao))
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (vetorPrincipal[posicao - 1].array != NULL)
        {
            if(vetorPrincipal[posicao - 1].quantidade == 0){
                 retorno = ESTRUTURA_AUXILIAR_VAZIA;
            }else{
                return vetorPrincipal[posicao - 1].quantidade;
            }
        }
        else
        {
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }

    return retorno;
}
/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.

Retorno: void.
*/
void destruirListaEncadeadaComCabecote(No **inicio) {
    if (inicio != NULL && *inicio != NULL) {
        No *atual = *inicio;
        No *prox;
        while (atual != NULL) {
            prox = atual->prox;
            free(atual);
            atual = prox;
        }
        *inicio = NULL;
    }
}

/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.

Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote() {
    No *cabecote = (No *)malloc(sizeof(No));
    if (cabecote == NULL) {
        return NULL;
    }
    cabecote->prox = NULL;

    No *atual = cabecote;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < vetorPrincipal[i].quantidade; j++) {
            No *novo = (No *)malloc(sizeof(No));
            if (novo == NULL) {
                destruirListaEncadeadaComCabecote(&cabecote);
                return NULL;
            }
            novo->conteudo = vetorPrincipal[i].array[j];
            novo->prox = NULL;
            atual->prox = novo;
            atual = novo;
        }
    }

    return cabecote;
}


/*
Objetivo: retorna os números da lista encadeada com cabeçote armazenando em vetorAux.

Retorno void
*/
int quantidadeTotal() {
    int quant = 0;
    for (int a = 0; a < TAM; a++) {
        quant += vetorPrincipal[a].quantidade;
    }
    return quant;
}

void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[]) {
    if (inicio == NULL) return;

    No *atual = inicio->prox;
    int index = 0;
    while (atual != NULL) {
        vetorAux[index++] = atual->conteudo;
        atual = atual->prox;
    }
}




/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 

*/

void inicializar()
{
    for (int a=0; a<TAM; a++){
        vetorPrincipal[a].array = NULL;
    }
}

/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.

*/

void finalizar()
{
    for (int a=0; a<TAM; a++){
        if(vetorPrincipal[a].array != NULL){
            free(vetorPrincipal[a].array);
            vetorPrincipal[a].array = NULL;
        }
    }
}
