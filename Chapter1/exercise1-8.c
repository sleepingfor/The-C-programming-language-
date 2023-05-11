#include <stdio.h>

/*count blanks ,tabs , newlines*/
int main(void) 
{
  int bl , ta , ne; /*bl count the blanks , ta count tabs , ne count newlines*/
  int i ;
                    /*initial bl,ta,ne*/
  bl = 0, ta = 0, ne = 0;

  while((i = getchar()) != EOF) {
    if (i == ' ') {
      ++bl;               /*count the blanks*/
    }
    else if (i == '\t') { 
      ++ta;               /*count the tabs*/
    }
    else if (i == '\n') {
      ++ne;               /*count the newlines*/
    }
  }

  printf("blanks = %d\t tabs = %d\t ne = %d\n ", bl , ta , ne);
  return 0;
}
