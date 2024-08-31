#include <stdio.h>

// Função para imprimir o número por extenso
void imprimirPorExtenso(int numero) {
    const char *numerosPorExtenso[] = {
        "Um", "Dois", "Três", "Quatro", "Cinco",
        "Seis", "Sete", "Oito", "Nove", "Dez",
        "Onze", "Doze", "Treze", "Quatorze", "Quinze",
        "Dezesseis", "Dezessete", "Dezoito", "Dezenove", "Vinte",
        "Vinte e um", "Vinte e dois", "Vinte e três", "Vinte e quatro", "Vinte e cinco",
        "Vinte e seis", "Vinte e sete", "Vinte e oito", "Vinte e nove", "Trinta",
        "Trinta e um", "Trinta e dois", "Trinta e três", "Trinta e quatro", "Trinta e cinco",
        "Trinta e seis", "Trinta e sete", "Trinta e oito", "Trinta e nove", "Quarenta",
        "Quarenta e um", "Quarenta e dois", "Quarenta e três", "Quarenta e quatro", "Quarenta e cinco",
        "Quarenta e seis", "Quarenta e sete", "Quarenta e oito", "Quarenta e nove", "Cinquenta",
        "Cinquenta e um", "Cinquenta e dois", "Cinquenta e três", "Cinquenta e quatro", "Cinquenta e cinco",
        "Cinquenta e seis", "Cinquenta e sete", "Cinquenta e oito", "Cinquenta e nove", "Sessenta",
        "Sessenta e um", "Sessenta e dois", "Sessenta e três", "Sessenta e quatro", "Sessenta e cinco",
        "Sessenta e seis", "Sessenta e sete", "Sessenta e oito", "Sessenta e nove", "Setenta",
        "Setenta e um", "Setenta e dois", "Setenta e três", "Setenta e quatro", "Setenta e cinco",
        "Setenta e seis", "Setenta e sete", "Setenta e oito", "Setenta e nove", "Oitenta",
        "Oitenta e um", "Oitenta e dois", "Oitenta e três", "Oitenta e quatro", "Oitenta e cinco",
        "Oitenta e seis", "Oitenta e sete", "Oitenta e oito", "Oitenta e nove", "Noventa",
        "Noventa e um", "Noventa e dois", "Noventa e três", "Noventa e quatro", "Noventa e cinco",
        "Noventa e seis", "Noventa e sete", "Noventa e oito", "Noventa e nove", "Cem"
    };

    if (numero >= 1 && numero <= 100) {
        printf("O número %d por extenso é: %s\n", numero, numerosPorExtenso[numero - 1]);
    } else {
        printf("Número fora do intervalo válido.\n");
    }
}

int main() {
    int numero;

    printf("Digite um número de 1 a 100: ");
    scanf("%d", &numero);

    imprimirPorExtenso(numero);

    return 0;
}