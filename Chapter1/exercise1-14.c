#include <stdio.h>

/*print histogram of the frequencies of different characters in its input*/

int main(void)
{
  int chars[26] = {0};
  int c;

  c = getchar();

  //count the length of chars
  while (c != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++chars[c - 'a'];
    }
    c = getchar();
  }

  //print the histogram of chars
  int i = 0;
  for (i ; i < 26 ; i++) {
    printf("%c " , 'a' + i);
    
    int j = 0;
    for(j ; j < chars[i] ; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
