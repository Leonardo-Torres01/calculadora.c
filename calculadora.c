#include <stdio.h>
#include "function_multiplicar.c"

int main()
{
    int opcao = 0;
    int continuar = 1;
    int num1, num2;

    while (continuar == 1)
    {
        printf("\nCalculadora\n\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n\n");
        printf("--> ");
        scanf("%d", &opcao);

        if (opcao == 4)
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            
            printf("O resultado e: %d\n", multiplicar(num1, num2));
        }
        else if (opcao >= 1 && opcao <= 3)
        {
            printf("Opcao indisponivel\n");
        }
        else
        {
            printf("Opcao invalida\n");
        }

    }
    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}
