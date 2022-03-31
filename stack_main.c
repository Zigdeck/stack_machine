#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"


int main(void){
    ptSTCK* ptStack;
    ptCNTL* ptControl;

    // TESTANDO COISAS
    short int num;
    ptControl->counter = 0;

    ptStack = Initialize_Stack();    

    printf("\nEnter a number.\n");
    scanf("%d", &num);

    ptStack = Push(ptStack, ptControl, num);
    num += 4;
    ptStack = Push(ptStack, ptControl, num);
    num += 3;
    ptStack = Push(ptStack, ptControl, num);
    ptStack = Pop(ptStack, ptControl); 
    
    ptSTCK* ptAux = ptStack;
 
    while(ptAux != NULL){
        printf("\n%d", ptAux->top);
        ptAux = ptAux->next;
    }
    // Deletar aqui em cima depois 


    /*
    Implementar as funções de leitura do arquivo, fechamento e execução do algoritmo.
    */

    return 0;
}