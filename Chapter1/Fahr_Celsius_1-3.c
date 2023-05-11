#include <stdio.h>

/* for fahr = 0, 20 , ... ,300,
printing the Fahr-Celsius table*/

int main(void)
{
  float fahr , celsius;
  float lower , upper , step;

  lower = 0;    /*lower limit of temperature table*/
  upper = 300;  /*upper limit*/
  step  = 20;

  fahr = lower;
  printf("The Fahr-Celsius Table \n");  /*print a heading*/
  while(fahr <= 300) {
    celsius = 5 * (fahr-32) / 9;        /*transacation fahr to celsius*/
    printf(" %3.0f \t %6.1f \n", fahr , celsius); /*print the fahr and celsius*/
    fahr = fahr + step;
  }
}


