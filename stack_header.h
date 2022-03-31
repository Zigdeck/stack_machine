typedef struct Stack ptSTCK;
typedef struct Stack_Control ptCNTL;

struct Stack{
    int top;
    ptSTCK *next;
};


struct Stack_Control{
    int counter;
    int reg;
};

ptSTCK* Initialize_Stack(ptCNTL* ptControl);
ptSTCK* Push(ptSTCK* ptStack, ptCNTL* ptControl,int num);
ptSTCK* Pop(ptSTCK* ptStack, ptCNTL* ptControl);

ptSTCK* Add(ptSTCK* ptStack, ptCNTL* ptControl);
ptSTCK* Sub(ptSTCK* ptStack, ptCNTL* ptControl);
ptSTCK* Mul(ptSTCK* ptStack, ptCNTL* ptControl);
ptSTCK* Div(ptSTCK* ptStack, ptCNTL* ptControl);
ptSTCK* Mod(ptSTCK* ptStack, ptCNTL* ptControl);

ptSTCK* Not(ptSTCK* ptStack);
ptSTCK* Or(ptSTCK* ptStack);
ptSTCK* And(ptSTCK* ptStack);
ptSTCK* Mir(ptSTCK* ptStack);

void Output(ptSTCK* ptStack);
ptSTCK* Clear(ptSTCK* ptStack);