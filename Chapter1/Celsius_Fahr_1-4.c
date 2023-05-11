#include <stdio.h>

/* for fahr = 0, 20 , ... ,300,
printing the Celsius-Fahr table*/

int main(void)
{
  float fahr , celsius;
  float lower , upper , step;

  lower = 0;    /*lower limit of temperature table*/
  upper = 300;  /*upper limit*/
  step  = 20;

  celsius = lower;
  printf("The Celsius-Fhar Table \n");  /*print a heading*/
  while(celsius <= 300) {
    fahr = 9 * celsius / 5 + 32;        /*transacation fahr to celsius*/
    printf(" %3.0f \t %6.1f \n", celsius , fahr); /*print the fahr and celsius*/
    celsius = celsius + step;
  }
}


