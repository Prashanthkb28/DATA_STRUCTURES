#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
    int i = 0, j = 0;
    /* traverse through the infix_expression array untill reaching NULL */
    while( Infix_exp[i] )
    {
        // check for a digit in infix expression 
        if( isdigit( Infix_exp[i] ) )
        {
            // if digit is found then store it  in postfix array 
            Postfix_exp[j] = Infix_exp[i];
            j++;
        }
        else
        {
            /* if the infix expression conatins operator and stack is empty then push operator into stack */
            if( peek(stk) == -1)
            {
                // push the data into stack 
                push(stk, Infix_exp[i]);
            }
            else if ( Infix_exp[i] == '(')
            {
                // push the '(' operator into stack
                push(stk,Infix_exp[i]);
            }
            else if ( Infix_exp[i] == ')' )
            {
                // run the loop untill '(' is poped from the stack
                while( stk->stack[stk->top] != '(' )
                {
                    // store peek of stack into array
                    Postfix_exp[j] = peek(stk);
                    //pop the top element
                    pop(stk);
                    // increment j 
                    j++;
                }
                pop(stk);
            }
            else
            {
                // check for the sign  and store priority wise
                while( stk->top != -1 && stk->stack[stk->top]!= '(' && (priority(Infix_exp[i]) <= priority(stk->stack[stk->top])))
                {
                    Postfix_exp[j] = peek(stk);
                    pop(stk);
                    j++;
                }
                push(stk,Infix_exp[i]);
            }
        }
        i++;
    }
    while( stk->top != -1)
    {
        Postfix_exp[j] = peek(stk);
        pop(stk);
        j++;
    }
	// store  null in the last of the array
	Postfix_exp[j] = '\0';
	return 0;
}
