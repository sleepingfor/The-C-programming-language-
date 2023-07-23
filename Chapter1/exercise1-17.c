#include <stdio.h>

#define MAXLINE 1000   /* maximum imput line length */
#define LENGTH  80     /* print length of lines     */

int getlines(char line[] , int maxline);

/*print the longest input line*/
int main()
{
  int len;              /* current line length       */
  char line[MAXLINE];   /* current input line        */
  char longest[MAXLINE];/* longest line saved here   */

  while((len = getlines(line , MAXLINE)) > 0) {
    if (len > LENGTH) /* there was a line*/
      printf("%s" , line);
    }
  return 0;
}

/* getline : read a line into s , return length */
int getlines(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n' ; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}


