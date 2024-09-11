#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    char sexo;
    struct no *prox; 
}No;

void liberarEspaco(int posicao){
    if(!ehPosicaoValida(posicao)){
        return;
    }else{
        if(vetorPrincipal[posicao - 1] == NULL){
            return;
        }else{
            free(vetorPrincipal[posicao - 1].array);
        }
    }
}

void imprimirPorLinha(){
    int posicao = 0;
    int posiAUX = 0;
    while(posicao != TAM){
        for(int a=0;a<TAM;a++){
            if(vetorPrincipal[a].array != NULL && vetorPrincipal[a].quantidade != 0){
                if(posiAUX <= vetorPrincipal[a].quantidade - 1){
                    printf("%d_", vetorPrincipal[a].array[posiAUX]);
                }
            }
        }
        posiAUX++;
        posicao++;
    }
}

No *listaEncadeada(){
    No *head = (No*)malloc(sizeof(No));
    No *aux;
    int posicao=0;
    while(posicao != TAM){
        if(vetorPrincipal[posicao].array != NULL && vetorPrincipal[posicao].quantidade != 0){
            for(int a=0; a<vetorPrincipal[posicao].quantidade - 1; a++){
                if(posicao == 0 && a==0){
                    head->valor = vetorPrincipal[posicao].array[a];
                    head->prox = NULL;
                }
                No *novo = (No*)malloc(sizeof(No));
                novo->valor=vetorPrincipal[posicao].array[a];
                novo->prox = NULL;
                aux = head;
                while(aux != NULL){
                    aux=aux->prox;
                }
                aux = novo;
            }
        }
        posicao++;
    }
    return head;

}

int main(){
    
}