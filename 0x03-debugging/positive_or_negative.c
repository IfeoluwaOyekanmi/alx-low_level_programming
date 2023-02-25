#include "main.h"
/**
 * positive_or_negative - checks if given number is +,- or 0
 *
 * @i: number to be checked
 * Return: nothing on sucess
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        else
                printf("%d is zero\n", n);
        return (0);
}
