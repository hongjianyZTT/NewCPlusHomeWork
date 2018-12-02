/*
 * This is an include-file in which macro MAX2 and MAX3 are defined.
 */
#include <math.h>
#define MAX2(x, y) ((x > y) ? x : y)   // Return the maximum value of the given arguments.
#define MAX3(x, y, z) MAX2(MAX2(x, y), z) // Return maximum using MAX2.