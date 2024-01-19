#include "main.h"

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{
    int i=0,j=0;
    // run the loop untill infix_expression reaches null
    while( Infix_exp[i] )
    {
        // check for digit
        if( isdigit(Infix_exp[i]) )
        {
            // store into prefix array
            Prefix_exp[j] = Infix_exp[i];
            j++;
        }
        else
        {
            //if operator and stack is empty  then push into the stack
            if( peek(stk) == -1)
            {
                // push the data to stack
                push( stk, Infix_exp[i] );
            }
            else if( Infix_exp[i] == ')')
            {
                // if (  push into the stack
                push( stk, Infix_exp[i] );
            }
            else if( Infix_exp[i] == '(' )
            {
                // run the loop untill ) is poped from the stack
                while( stk->stack[stk->top] != ')')
                {
                    // store the stack elements into prefix array
                    Prefix_exp[j] = peek(stk);
                    //pop the top element
                    pop(stk);
                    j++;
                }
                pop(stk);
            }
            else
            {
                // check for the  sign and stack priority wise
                while( stk->top != -1 && stk-> stack[stk->top] != ')' && priority(Infix_exp[i]) < priority(stk->stack[stk->top]) )
                {
                    Prefix_exp[j] = peek(stk);
                    pop(stk);
                    j++;
                }
                 push( stk, Infix_exp[i] );
            } 
            
        }
        i++;
    }
    //pop all elements from the stack to prefix array
    while( stk->top != -1)
    {
        Prefix_exp[j] = peek(stk);
        pop(stk);
        j++;
    }
    // store the null at the end of the string expression array
	Prefix_exp[j] = '\0';
	return 0;
}
