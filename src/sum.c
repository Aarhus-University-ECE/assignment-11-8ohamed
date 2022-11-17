#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    assert (n >= 1);

  if (n > 1){
  total = total + n;
    return sum (n - 1);
  }
  else
    return 1;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  
    assert (n >= 1);

  if (n > 1){

  for (int i = 0;i>=n;i++)
{  
    return i + sum (n - 1);
}
}

  else

    return 1;
}

