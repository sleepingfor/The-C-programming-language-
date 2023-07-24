
#include <stdio.h>

/* replaces tabs in the input with the proper number of blanks to spave to the next tab stop */

int main()
{
  int c;
  while((c = getchar()) != EOF) {
    int n = 3;
    int i = 0;
    while(c == ' ') {
      c = getchar();
      i++;
    }
    while(i >= n) {
      printf("\t");
      i = i - n;
    }
    for(i ; i > 0 ; i--) {
      printf(" ");
    }
      putchar(c);
  }
}
