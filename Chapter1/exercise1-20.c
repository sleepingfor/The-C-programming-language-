#include <stdio.h>

/* replaces tabs in the input with the proper number of blanks to spave to the next tab stop */

int main()
{
  int c ;
  while((c = getchar()) != EOF) {
    if( c == '	') {
      printf("    ");
    }
    else {
      putchar(c);
    }
  }
}


