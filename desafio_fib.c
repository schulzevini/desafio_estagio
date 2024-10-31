#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n < 0) {
        printf("Numero invalido, digite um numero maior que 0\n");
        exit(1);
    }

    int prev = 0, atual = 1, next;

    for (int i = 2; i <= n; i++) {
        next = prev + atual;
        prev = atual;
        atual = next;
    }

    return atual;
}

int fibonacci_recursiva(int n) {
    if (n < 0) {
        printf("Numero invalido, digite um numero maior que 0\n");
        exit(1);
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}



int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Fibonacci de %d = %d\n", n, fibonacci(n));
    printf("Fibonacci de %d = %d\n", n, fibonacci_recursiva(n));

    return 0;
}
