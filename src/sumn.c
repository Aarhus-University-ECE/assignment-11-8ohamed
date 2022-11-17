#include "sumn.h"
#include <stdbool.h>
#include<stdio.h>
#include <assert.h>

int sumn (int n)
{
assert (n > 0);
if (n>1){

return 2*n -1 + sumn (n-1);

}

else
    return 1;
}