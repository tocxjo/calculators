#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

  /* intro */
  printf("\nWarning: In order for this calculator to work properly, you must use kg for mass and m/s2 for velocity.\n\n");
  printf("(The order is: m, v)\n\n");

  /* variables */
  double mass, vel, result;

  if (argc != 3) {
    printf("Invalid arguments.\n");
    return -1;
  }

  /* converting arguments to float */
  mass = atof(argv[1]);
  vel = atof(argv[2]);

  /* km to m/s */
  vel = vel * 1000 / 3600;

  /* final calculation (½ m * v² = x quantity of joules) */
  result = (0.5 * mass * pow(vel, 2));

  /* print of results */
  printf("The result is: %6.2fJ", result);

  return 0;
  
}
