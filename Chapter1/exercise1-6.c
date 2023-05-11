#include <stdio.h>

/*Verify that the expression getchar() != EOF is 0 or 1*/
int main()
{
  int c ;
  c = getchar();
  if (c != EOF) {
    printf("result is 0 \n");
  }
  else {
    printf("result is 1 \n");
  }



}

