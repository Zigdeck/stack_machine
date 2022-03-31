#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"

// Inicializa a pilha e retorna NULL.
ptSTCK* Initialize_Stack(ptCNTL* ptControl){
    return NULL;
}

// Aloca um elemento no topo da pilha.
ptSTCK* Push(ptSTCK* ptStack, ptCNTL* ptControl,int num){

}

// Retira o elemento que está no topo da pilha.
ptSTCK* Pop(ptSTCK* ptStack, ptCNTL* ptControl){
    
}

ptSTCK* Add(ptSTCK* ptStack, ptCNTL* ptControl){

}
ptSTCK* Sub(ptSTCK* ptStack, ptCNTL* ptControl){

}
ptSTCK* Mul(ptSTCK* ptStack, ptCNTL* ptControl){

}
ptSTCK* Div(ptSTCK* ptStack, ptCNTL* ptControl){

}
ptSTCK* Mod(ptSTCK* ptStack, ptCNTL* ptControl){

}

ptSTCK* Not(ptSTCK* ptStack){

}
ptSTCK* Or(ptSTCK* ptStack){

}
ptSTCK* And(ptSTCK* ptStack){

}
ptSTCK* Mir(ptSTCK* ptStack){

}

void Output(ptSTCK* ptStack){

}

// Destroí a pilha e limpa a memória alocada.
ptSTCK* Clear(ptSTCK* ptStack){
    ptSTCK *ptAux;
    // Enquanto a pilha não estiver vazia...
    while (ptStack != NULL) {
        ptAux = ptStack;
        ptStack = ptStack->next;
        printf(" -  %d ",ptAux->top);
        // Desaloca a memória.
        free(ptAux);
    }
    // Após desalocar a memória, retorna NULL.
    return NULL;
}