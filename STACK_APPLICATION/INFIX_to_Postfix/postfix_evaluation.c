#include "main.h"
int operation(int op1,int op2, char oper);

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
    int i=0;
    while( Postfix_exp[i])
    {
        // check for digit
        if(isdigit(Postfix_exp[i]))
        {
            push(stk,(Postfix_exp[i]-48) );
        }
        else
        {
            // pop 2nd operand 
            int operand2 = peek(stk);
            // pop 1st operand 
            pop(stk);
            int operand1 = peek(stk);
            pop(stk);
            push(stk,operation(operand1,operand2,Postfix_exp[i]));
        }
        i++;
    }
    return peek(stk);

}
int operation(int operand1, int operand2, char oper)
{
    switch(oper)
    {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
    }
}
