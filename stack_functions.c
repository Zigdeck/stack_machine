#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"

// Inicializa a pilha e retorna NULL.
ptSTCK* Initialize_Stack(ptCNTL* ptControl){
    return NULL;
}

// Aloca um elemento no topo da pilha.
ptSTCK* Push(ptSTCK* ptStack, ptCNTL* ptControl, short int num){
    ptSTCK *new, *ptAux = ptStack;
    new = (ptSTCK*) malloc(sizeof(ptSTCK));

    // Caso o elemento a ser inserido na pilha seja do registrador $R.
    if (num == NULL){
        num = ptControl->reg;
    }
    else {
    new->top = num;
    }

    // Testa se a pilha já esta cheia.
    if(ptControl->counter >= 128){
        printf("\nThe stack if full.\n");
        return ptStack;
    }
    // Se não estiver, incrementar o contador.
    else{
        ptControl->counter = ptControl->counter + 1;
    }

    // Caso a pilha esteja vazia, irá inserir no inicio dela.
    if(ptStack == NULL){ 
        new->next = ptStack;
        ptStack = new;
    }
    // Caso não esteja vazia.
    else{
        // Percorre a pilha até o topo.
        while(ptAux->next != NULL){
            ptAux = ptAux->next;
        }
        // Coloca o elemento no topo da pilha.
        ptAux->next = new;
        new->next = NULL;
    }

    //Retorna o estado atual da pilha.
    return ptStack; 
}

// Retira o elemento que está no topo da pilha.
ptSTCK* Pop(ptSTCK* ptStack, ptCNTL* ptControl){
    ptSTCK *ptAux = ptStack;
    // Testa se a pilha está vazia.
    if (ptAux->top == NULL){
        printf("\nThe stack is empty.\n");
        return;
    }
    // Se não, percorre ela até o final.
    else{
        while(ptAux->next != NULL){
            ptAux = ptAux->next;
        }        
        // Desaloca o último elemento da pilha.
        free(ptAux);
        ptControl->counter = ptControl->counter - 1;
    }
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

// Imprime o topo da pilha na tela.
void Output(ptSTCK* ptStack){
    ptSTCK *ptAux;
    // Testa se a pilha está vazia.
    if (ptStack == NULL){
        printf("\n Empty stack. \n");
    }
    else{
        // Percorre a pilha até o topo.
        for(ptAux = ptStack; ptAux != NULL; ptAux = ptAux->next){            
        }
        // Imprime o topo da pilha.
        printf(" %d", ptStack->top);
    }    
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