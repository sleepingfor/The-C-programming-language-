#include <stdio.h>

void squeeze(char s1[],char s2[]);

int main(){
    char a[] = "hello world!";
    char b[] = "hl";

    squeeze(a,b);


}

void squeeze(char s1[],char s2[]) {
  int i,j,k,len;
  char s[1000];

  i = j = k = 0;
  for(i;s1[i] != '\0';++i) {
    j = 0;
    for(j;s2[j] != '\0';++j) {
      if(s1[i] != s2[j]) 
        s[k++] = s1[i];
    }
  }
  s[k] = '\0';
  printf("%s",s);
//  int m=0;
//  for(m;m<len;m++) 
//    s1[m] = s[m];
}
