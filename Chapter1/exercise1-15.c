#include <stdio.h>

/*the temperature conversion program*/

int main()
{
  int i;

  float fahr , celsius;
  float lower , upper , step;

  lower = 0;    /*lower limit of temperature table*/
  upper = 300;  /*upper limit*/
  step  = 20;

  float tem_cover(float fahr) {
    int celsius;
    celsius = 5 * (fahr - 32) / 9;
    return celsius;
  }
  
  fahr = lower;
  printf("The Fahr-Celsius Table \n");  /*print a heading*/
  for (fahr ; fahr <= upper ; fahr = fahr +step) {
    printf(" %3.0f \t %6.1f \n", fahr , tem_cover(fahr));
  }
  return 0;
}
