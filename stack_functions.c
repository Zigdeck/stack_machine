// Functions.
#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"

ptSTCK* Initialize_Stack(ptCNTL* ptControl){
    return NULL;
}
ptSTCK* Push(ptSTCK* ptStack, ptCNTL* ptControl,int num){

}
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
ptSTCK* Clear(ptSTCK* ptStack){
    ptSTCK *ptAux;
    while (ptStack != NULL) {
        ptAux = ptStack;
        ptStack = ptStack->next;
        printf(" -  %d ",ptAux->top);
        free(ptAux);
    }
    return NULL;
}