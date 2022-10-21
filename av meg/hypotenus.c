#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    double b;
    
    printf("This app will calculate the hypotenuse of a right triangle. \n");
    
    printf("Enter the first value: ");
    scanf("%lf", &a);
    
    printf("Enter the second value: ");
    scanf("%lf", &b);
    
    //The calculation
    double c = sqrt((a * a) + (b * b));
    
    printf("The hypotenuse si %f\n", c);
    
    return 0;
}