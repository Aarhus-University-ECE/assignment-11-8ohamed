/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p)
{
/* pre-condition */
assert (n >= 1);
/* post-condition */
    if(n == 1){
        return p;
    }
    {
    else
        return fib(n-1,pp,p+pp);
}
return 0; }


