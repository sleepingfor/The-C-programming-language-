#include <stdio.h>

void squeeze(char s1[],char s2[]);

int main(){
    char a[] = "hello world!";
    char b[] = "hl";

    squeeze(a,b);
    printf("%s\n",a);
}

void squeeze(char s1[],char s2[]) {
  int i,j,k;
  k = 0;

  while(s2[k] != '\0') {
    for(i = j = 0; s1[i] != '\0'; i++) {
      if(s1[i] != s2[k])
        s1[j++] = s1[i];
    }
    s1[j] = '\0';
    k++;
  }
}
