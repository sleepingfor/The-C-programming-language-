#include <stdio.h>

/*replacing each tab by \t,each backspace by \b,
 * and each backslash by \\ */

int main(void) {
 
  int c ;
  c = getchar();
  
  while(c != EOF) {

    if (c == '	') {         /*the string is tab ,print the \t*/
      putchar('\\');
      putchar('t');
    }
    else if(c == '') {     /*the string is backspace ,print the \b*/
      putchar('\\');
      putchar('b');
    }
    else if(c == '\\') {     /*the srting is backslash ,print the \\*/
      putchar('\\');
      putchar('\\');
    }
    else {
      putchar(c);            /*the string not is tab backslash backspace ,print the string*/
    }
    
  c = getchar();             /*next the string*/
  }
  return 0;
}



