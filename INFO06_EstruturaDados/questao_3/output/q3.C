#include <stdio.h>
#include <stdlib.h>

// Estrutura para o nó da lista simplesmente ligada circular de valores reais
typedef struct NoSimples {
    float valor;
    struct NoSimples* next;
} NoSimples;

// Estrutura para o nó da lista duplamente ligada de chaves inteiras
typedef struct NoDuplo {
    int key;
    NoSimples* circularList;
    struct NoDuplo* prev;
    struct NoDuplo* next;
} NoDuplo;

// Função para criar um novo nó da lista simplesmente ligada circular
NoSimples* NoCircular(float valor) {
    NoSimples* newNode = (NoSimples*)malloc(sizeof(NoSimples));
    newNode->valor = valor;
    newNode->next = newNode; // Inicialmente, aponta para si mesmo
    return newNode;
}

// Função para inserir um valor na lista simplesmente ligada circular de forma ordenada
void inserirNoCircular(NoSimples** head, float valor, FILE* file) {
    NoSimples* newNode = NoCircular(valor);
    if (*head == NULL) {
        *head = newNode;
        fprintf(file, "(%.2f)", newNode->valor);
    } else {
        NoSimples* current = *head;
        NoSimples* prev = NULL;
        do {
            if (valor < current->valor) {
                newNode->next = current;
                if (prev == NULL) {
                    NoSimples* last = *head;
                    while (last->next != *head) {
                        last = last->next;
                    }
                    last->next = newNode;
                    *head = newNode;
                } else {
                    prev->next = newNode;
                }
                fprintf(file, "(%.2f)", newNode->valor);
                return;
            }
            prev = current;
            current = current->next;
        } while (current != *head);

        prev->next = newNode;
        newNode->next = *head;
        fprintf(file, "(%.2f)", newNode->valor);
    }
}

// Função para criar um novo nó da lista duplamente ligada
NoDuplo* createNoDuplo(int key) {
    NoDuplo* newNode = (NoDuplo*)malloc(sizeof(NoDuplo));
    newNode->key = key;
    newNode->circularList = NULL;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um nó na lista duplamente ligada de forma ordenada
void inserirNoDuplo(NoDuplo** head, int key, FILE* file) {
    NoDuplo* newNode = createNoDuplo(key);
    if (*head == NULL) {
        *head = newNode;
        fprintf(file, "[%d]", newNode->key);
    } else {
        NoDuplo* current = *head;
        NoDuplo* prev = NULL;
        while (current != NULL && key > current->key) {
            prev = current;
            current = current->next;
        }
        if (prev == NULL) {
            newNode->next = *head;
            (*head)->prev = newNode;
            *head = newNode;
        } else {
            newNode->next = current;
            newNode->prev = prev;
            prev->next = newNode;
            if (current != NULL) {
                current->prev = newNode;
            }
        }
        fprintf(file, "[%d]", newNode->key);
    }
}

// Função principal
int main() {
    FILE *input, *output;
    input = fopen("L1Q3.in", "r");
    output = fopen("L1Q3.out", "w");
    NoDuplo* headDuplo = NULL;
    NoSimples* headCircular = NULL;
    float real;

    if (input == NULL) {
        printf("Arquivo não pode ser aberto");
        fclose(output);
        return 0;
    }

    while (fscanf(input, "%f", &real) == 1) {
        int num = real;
        if (real - num == 0) {
            inserirNoDuplo(&headDuplo, num, output);
        } else {
            inserirNoCircular(&headCircular, real, output);
        }
    }

    fclose(input);
    fclose(output);
    return 0;
}
