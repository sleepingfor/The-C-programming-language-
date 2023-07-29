#include <stdio.h>
/* htoi: input char s[] ,out the h% number */
int htoi(char s[]);

int main() {
  char line[] = "0x39aBC";
  char sel[] = "0X100";

  printf("line is %d\n",htoi(line));
  printf("sel  is %d\n",htoi(sel));
}

int htoi(char s[]) {
  int c,i,result;
  
  i = 0;
  result = 0;

  if(s[i] == '0') {
    ++i;
    if((s[i] == 'x') || (s[i] == 'X')) {
      ++i;
      while(s[i] != '\0') {
        if(s[i] >= '0' && s[i] <= '9'){
          result = result * 16 + (s[i] - '0');
          ++i;
        }
        else if(s[i] >= 'a' && s[i] <= 'f'){
          result = result * 16 + (s[i] - 'a' + 10);
          ++i;
        }
        else if(s[i] >= 'A' && s[i] <= 'F'){
          result = result * 16 + (s[i] - 'A' + 10);
          ++i;
        }
      }
    }
  }
  return result;
}
