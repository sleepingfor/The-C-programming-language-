#include <stdio.h>

#define MAXLINE  1000   /* maximum input line length                       */
#define NEW_TERM  2     /* one newline character and one string terminator */
/* remove trailing blanks and tabs from each line of input , and to delete entirely blank lines*/

int getlines(char line[] , int maxline );

/**/
int main() 
{
  int len;                /* current line length subtract one newline character and one string terminator */
  int real_len;           /* line length remove trailing blanks and tabs , '\0' , '\n'*/
  char line[MAXLINE];     /* maximum length seen so for                   */
  char del_line[MAXLINE]; /*store the line after deleting the tabs,blanks */

  while ((len = getlines(line , MAXLINE)) > 0) {
    len = len - NEW_TERM;
    while(line[len] == ' ' || line[len] == '\t') {
        real_len = len ;
        --len;
    }

    if (real_len != 0) {
      int i;
      for( i = 0; i < real_len ; ++i) 
        printf("%c" , line[i]);

      printf("\n");
    }
  }
}

/* getline: read a line into s, return length */
int getlines(char s[] , int lim)
{
  int c, i;

  for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n' ; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
