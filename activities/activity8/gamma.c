/* 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv)
{
  int* x[10];
  int i;

  // allocate  
  for (i=0; i<sizeof(x); ++i) {
      assert( (x[i]=malloc(sizeof(x))));
  }
  // free
  for (i=0; i<sizeof(x); ++i) {
      free(x[i]);
  }

  return 0;
}
