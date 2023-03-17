#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * prints a String
 *     * Return: Always 0 (Success)
 *      **/

int main(void)
{
int n;
char posNeg[8];
srand(time(0));
n = rand() - RAND_MAX / 2;
if  (n >= 0)
{
posNeg = "positive";
}
else
{
posNeg = "negative";
}
printf("%d is %d\n", n, posNeg);
return (0);
}

