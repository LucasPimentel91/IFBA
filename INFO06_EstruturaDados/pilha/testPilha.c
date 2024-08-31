#include<stdio.h>
#include<stdlib.h>

/*Criar uma estrutura de dados do tipo pilha (stack) em C
utilizando arrays é uma abordagem simples, mas para uso
mais do dinâmico da memória criar com listas encadeadas 
é uma boa opção também.*/

#define MAX 1000 //Capacidade máxima

//Definindo a estrutura
typedef struct Stack{
    int top;
    int capacity;
    int* array;
}Stack;

//Inicializar e alocar memória
Stack* createStack(int capacity){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top= -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

//Verificação da totalidade da pilha
int isFull(Stack* stack){
    return stack->top == stack->capacity - 1;
}

//Verificação do vazio da pilha
int isEmpty(Stack* stack){
    return stack->top == -1;
}

//Empilhar
void push(Stack* stack, int item){
    if(isFull(stack)){
        printf("Stack overflow\n");
    }
    stack->array[++stack->top] == item;
    printf("%d pushed to stack\n", item);
}

//Desenpilhar
int pop(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack underflow\n");
        return -1;
    }
    return stack->array[stack->top--];
}

//Topo da pilha
int peek(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
        return -1;
    }
    return stack->array[stack->top];
}

void printStack(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->array[i]);
        }
        printf("\n");
    }
}

int main(){
   Stack* stack = createStack(MAX);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printStack(stack);

    printf("%d popped from stack\n", pop(stack));
    printStack(stack);

    printf("Top element is %d\n", peek(stack));

    free(stack->array);
    free(stack);

    return 0;
}