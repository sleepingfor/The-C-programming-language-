#include <stdio.h>

/*print a histogram of the lengths of words in its input*/

#define MUX_LENGTH 20  //the max legth of words

int main()
{
  int c;               //input the char
  int words[MUX_LENGTH] = {0};
  int count = 0;

  c = getchar();
 
//count the length of words
  while(c != EOF) {
    
    int count , length;

    if (c != ' ' || c != '\n' || c != '\t') {
      ++count;  //count the length of words
      length = count;
      printf("%d,%d\n",count,length);
    }
    else {
      count = 0;
      ++words[length];   //the length of words add 1
    }
    c = getchar();       //input the next char
  }
 
///////////////////////////// 
 for (int k = 0; k < MUX_LENGTH; k++) {
   printf("%d",words[k]);
 }
/////////////////////////////

//print the histogram
  printf("length\n");

  int i;
  for (i = 0 ; i < MUX_LENGTH  ; i++ ) {
    printf("%6d" , i);

    int j = 0;
    for(j ; j < words[i] ; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
