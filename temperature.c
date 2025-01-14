#include <stdio.h> /* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size *//* print Fahrenheit-Celsius table */

int main(void)
{
    int fahr;
    int celsius;

    printf("The Conversion between Celsius and Fahrenheit:\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    return (0);
}
