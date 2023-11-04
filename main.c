#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Função para adicionar dois números
double adicao(double num1, double num2) {
    return num1 + num2;
}

// Função para subtrair dois números
double subtracao(double num1, double num2) {
    return num1 - num2;
}

// Função para multiplicar dois números
double multiplicacao(double num1, double num2) {
    return num1 * num2;
}

// Função para dividir dois números
double divisao(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisão por zero\n");
        exit(1);
    }
}

int main() {
    char operador;
    double num1, num2, resultado;
    char num1_str[100], num2_str[100];
    int base;

    printf("Digite a base numerica (2 - binaria, 10 - decimal, 16 - hexadecimal): ");
    scanf("%d", &base);

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o primeiro numero: ");
    scanf("%s", num1_str);

    printf("Digite o segundo numero: ");
    scanf("%s", num2_str);

    // Converter os números para decimal, independentemente da base
    num1 = strtol(num1_str, NULL, base);
    num2 = strtol(num2_str, NULL, base);

    switch (operador) {
        case '+':
            resultado = adicao(num1, num2);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            break;
        case '/':
            resultado = divisao(num1, num2);
            break;
        default:
            printf("Operador invalido\n");
            exit(1);
    }

    printf("Resultado: %.2lf\n", resultado);
    system("PAUSE");
    return 0;
}
