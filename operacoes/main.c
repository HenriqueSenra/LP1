/**
 * @file main.c
 * @author Jose Senra (a21154@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2;

    printf("introduza 2 numeros:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("Resultado da soma: %.2f\n", num1 + num2);
    printf("Resultado da subtracao: %.2f\n", num1 - num2);
    printf("Resultado da multiplicacao: %.2f\n", num1 * num2);
    printf("Resultado da divisao: %.2f", num1 / num2);

    getchar();
    getchar();

    return 0;
}
