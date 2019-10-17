#include <stdio.h>
#include <stdlib.h>

struct menu {char * food; double price;};

struct menu structExample(struct menu * item);

void printStruct(struct menu item);

void changeStructValues(struct menu * item, char * newFood, double newPrice);
