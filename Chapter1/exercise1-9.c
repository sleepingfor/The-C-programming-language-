#include <stdio.h>

/*copy the input to output , 
 replacing each string of 
 one or more blanks by a 
 single blank              */

int main(void) {
  int c ;
  c = getchar();
  
  while(c != EOF) {
    int mid;
        
    if (c != ' ') {
      putchar(c);              /*if the string not is one blanks ,print the string   */
    }
    else {      
     
     while(c == ' ') {         /*if the string is one blanks ,store the string to mid*/
        mid = c;
        c = getchar();
      }

      putchar(mid);            /*print a blank*/
      putchar(c);              /*pirnt the string */
    }
  
    c = getchar();
  }
  return 0;
}



