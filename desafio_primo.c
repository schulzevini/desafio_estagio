#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

bool eh_primo(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void listar_primos(int limite) {
    if (limite < 1) {
        printf("Numero invalido, digite um numero maior que 0\n");
        exit(1);
    }
    for (int i = 2; i <= limite; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    
    
    printf("\n");
}

void listar_primos_recursivo(int atual, int limite) {
    if (limite < 1) {
        printf("Numero invalido, digite um numero maior que 0\n");
        exit(1);
    }
    
    if (eh_primo(atual)) {
        printf("%d ", atual);
    }

    listar_primos_recursivo(atual + 1, limite);
}


int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero > 0) {
        printf("Números primos até %d:\n", numero);    
    }
    //listar_primos(numero);
    listar_primos_recursivo(2, numero);

    return 0;
}
