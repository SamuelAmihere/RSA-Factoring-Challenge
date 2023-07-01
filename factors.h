#ifndef _FACTORS_H
#define _FACTORS_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdbool.h>
#include <math.h>

typedef unsigned long long int ullong;

bool is_prime(ullong n);
ullong find_factor(ullong n);
void factorize(ullong n);

#endif
