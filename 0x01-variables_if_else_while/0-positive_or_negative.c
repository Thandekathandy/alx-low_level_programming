#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Description - prints if random generated number is +tive, zero or -tive
*Return: Always 0 (Success)
*/
int main(void)
(
srand(time(0));
n = rand() - RAND_MAX / 2;
)
if (n < 0)
(
prinft("%d is positive\n", n);
)
else if (n == 0)
(printf("%d is zero\n", n);
else
(
printf("%d is positive\n", n);
return (0);
)
