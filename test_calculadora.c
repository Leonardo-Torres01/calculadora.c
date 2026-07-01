#include <stdio.h>
#include <assert.h>
#include "function_multiplicar.c"

int main()
{   

    assert(multiplicar(2, 0) == (2 * 0));
    assert(multiplicar(3, 6) == (3 * 6));
    assert(multiplicar(42, 64) == (42 * 64));
  
    printf("Todos os testes da calculadora: PASSOU\n");
  
    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}
