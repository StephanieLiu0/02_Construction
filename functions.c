#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "functions.h"

struct menu structExample(struct menu * item) {
  srand( time(NULL) );

  char * myFoods[] = {"Spaghetti", "Pizza", "Waffles", "Sushi", "Salad", "Cake", "Ice Cream", "Apple Pie"};

  int r = rand() % 8;
  item->food = * (myFoods + r);
  item->price = (r + 4) * 0.75;

  return *item;
}

void printStruct(struct menu item) {
  printf( "Food: %s\tPrice: $%f\n", item.food, item.price);
}

void changeStructValues(struct menu * item, char * newFood, double newPrice) {
  item->food = newFood;
  item->price = newPrice;
}
  
  

	  
