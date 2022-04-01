#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"


int main(void){
    ptSTCK* ptStack;
    ptCNTL* ptControl;

    // TESTANDO COISAS
    short int num;
    ptStack = Initialize_Stack();

    // Teste com o programa do sor...
    ptStack = Clear(ptStack, ptControl);
    ptStack = Push(ptStack, ptControl, 4);
    ptStack = Push(ptStack, ptControl, 8);
    Add(ptStack, ptControl);
    ptStack = Pop(ptStack, ptControl);
    ptStack = Pop(ptStack, ptControl);
    ptStack = Push(ptStack, ptControl, ptControl->reg);
    Output(ptStack);

    /*
    Implementar as funções de leitura do arquivo, fechamento e execução do algoritmo.
    */

    return 0;
}