#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int factorial(int n) {
	if(n==1){
		return 1;
	}
	return n = n * factorial(n-1);

}

int main()
{
	int n;
	scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
