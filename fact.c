#include "factors.h"

/**
 * is_prime - Finds prime number
 * 
 * @n: Number tofind its prime
 * 
 * Returns: boolean
 */
bool is_prime(ullong n) 
{
    ullong i;

    if (n <= 1)
        return false;

    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

/**
 * find_factor - Finds a factor
 * 
 * @n: Number to find its factor
 * 
 * Returns: A factor
 */
ullong find_factor(ullong n)
{
    ullong i;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return i;
    }
    return n;
}

/**
 * factorize - Factorizes a number
 * 
 * @n: Number to find its factor
 * 
 * Returns: Nothing
 */
void factorize(ullong n)
{
    ullong p, q;

    p = find_factor(n);
    q = n / p;
    printf("%llu=%llu*%llu\n", n, q, p);
}
