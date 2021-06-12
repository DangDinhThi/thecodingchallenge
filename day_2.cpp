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
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
    //nhap va doc cac bien
	scanf("%lf %d %d",&meal_cost,&tip_percent,&tax_percent);
    //tinh total
	double tip=(meal_cost * tip_percent)/100;
    double tax=(meal_cost * tax_percent)/100;
    int total_cost=(int)round(meal_cost+tip+tax);
   	//in ra kq
    printf("%d", total_cost);
}

int main()
{
	double meal_cost;
	int tip_percent;
	int tax_percent;
    solve(meal_cost,tip_percent, tax_percent);

    return 0;
}

