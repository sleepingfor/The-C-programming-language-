#include <stdio.h>

/*prints input one word per line*/
/*NOTE: if the test.txt include blank , tab ,
 * newline in the first line
 * the frist line of output is nothing*/


int main(void) 
{
  
  int c;
  c = getchar();
  
  while (c != EOF) {
    
    int mid;                 /*middle variable ,store the previous value of c*/

    if(c == ' ' || c == '\n' || c == '\t') {
      mid = c;               /*if the char is blank , tab , newline ,store the value of C*/
      c = getchar();
    }
    else {
      if (mid == ' ' || mid == '\t' || mid == '\n') {
        putchar('\n');       /*mid is balnk ,tab or newline ,the c not is this,print \n and c*/ 
        putchar(c);
        mid = c;
      }
      else {
        putchar(c);          /*mid and c not is balnk ,tab or newline ,only print c*/
        mid = c;
      }
      c = getchar();
    }
  }
  return 0;
}
