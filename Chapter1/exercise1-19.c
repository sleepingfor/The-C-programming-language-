#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line length */

/* Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time*/

char* reverse(char s[]);

/* print the reverse lines */
int main()
{
  
  char line[MAXLINE];                             /* current input line  */
  char re_line[MAXLINE];                          /* storing reverse line*/
  strcpy(re_line, reverse(line));
  
  if(re_line[0] != '\0') 
    printf("%s" , re_line);
}

/* function reverse(s): read a line into s,return a reverse string s */
int reverse(char s[])
{
  int c, i , leng;
  char reverse[MAXLINE];

  for (i = 0 ; (c = getchar()) != EOF && c != '\n' ; ++i)
    s[i] = c;
  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  for(i ; i >= 0; --i) {
    reverse[leng - i] = s[i] ;
  }
  
  return reverse;
}
