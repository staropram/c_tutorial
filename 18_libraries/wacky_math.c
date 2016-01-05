#include "wacky_math.h"
#include <stdlib.h>
int wacky_add(int a, int b) {
	return a + b + rand()%10;
}
