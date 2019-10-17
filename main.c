#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
  printf("Example:\n");
  
  struct menu item0;
  structExample(&item0);
  printStruct(item0);

  printf( "Change the values:\n");
  
  changeStructValues(&item0, "Burger", 7.00);
  printStruct(item0);

  return 0;
}
