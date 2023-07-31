#include <stdio.h>

/* the first location in a string s1 where any character
   from the string s2 occurs,or -1 if s1 contians no 
   characters form s2                                  */

int any(char s[],char m[]);

int main() {
  int result;
  char a[] = "hello,wold!";
  char b[] = "we";
  char c[] = "hd";
  char d[] = "l,";
  char f[] = "fg";
  
  printf("%d\n",result = any(a,b));
  printf("%d\n",result = any(a,c));
  printf("%d\n",result = any(a,d));
  printf("%d\n",result = any(a,f));
 
}

/* input s1[],s2[],outpu the number */
int any(char s1[],char s2[]) {
  int i,j,k,first_l;

  i = k = 0;
  first_l = -1;
  
  while(s2[i] != '\0') {
    for(j = 0; s1[j] != '\0'; ++j) {
      if(s1[j] == s2[i]) {
        return j;
      }
    }
    i++;
  }

  return first_l;
}
