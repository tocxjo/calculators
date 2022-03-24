#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

  /* intro */
  printf("\nWarning: In order for this calculator to work properly, you must use kg for mass, m/s2 for gravity, and mts for height.\n\n");
  printf("(The order is: m, g, h)\n\n");
  
  /* variables */
  double mass, grav, height, result;

  if (argc != 4) {
    printf("Invalid arguments.\n");
    return -1;
  }

  /* converting arguments into float */
  mass = atof(argv[1]);
  grav = atof(argv[2]);
  height = atof(argv[3]);

  /* final calculation (m * g * v = x quantity of joules) */
  result = mass * grav * height; 

  /* print of results */
  printf("The result is: %6.2fJ\n", result);

  return 0;

} 
