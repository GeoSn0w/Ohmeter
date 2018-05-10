#include <stdio.h>
#include <stdlib.h>

float resistance = 0; //Ohms
float volts = 0; //Volts
float current = 0; //Amps
float power = 0; //Watts

int calculate_ohms_law(){
  current = volts / resistance;
  power = current * volts;
  printf("\nThe current (I) is %g Amps\n", current);
  printf("The power (P) is %g Watts\n", power);
  return 0;
}
int main(){
  printf("Ohm's law calculator built by GeoSn0w (@FCE365) because why not.\n");
  printf("Input the voltage (without V): ");
  scanf("%f", &volts);
  printf("Input resistance in Ohms: ");
  scanf("%f", &resistance);
  calculate_ohms_law();
  return 0;
}
