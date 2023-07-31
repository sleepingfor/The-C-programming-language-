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
  
  int mid1 = 0;
  int mid2 = 0;
  while(s2[i] != '\0') {
    printf("in while\n");
    for(j = 0; s1[j] = '\0'; ++j) {
      if(s1[j] == s2[i])
        printf("in for\n");
        mid1 = j;
        k = 1;
        printf("in k is %d\n",k);
        if(mid1 > mid2 || k)
          mid1 = mid2;
        break;
    }
    mid2 = mid1;
    i++;
  }
  printf("out k is %d\n",k);
  if(k)
    first_l = mid2;

  return first_l;
}
