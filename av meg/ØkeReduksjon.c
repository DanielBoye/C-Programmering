#include <stdio.h>

int main(void)
{
    int pizzasToEat = 100;
    printf("pizzasToEat: %i\n", pizzasToEat);
    
    pizzasToEat += 100;
    printf("pizzasToEat: %i\n", pizzasToEat);
    
    pizzasToEat -= 100;
    pizzasToEat *= 2; //200
    pizzasToEat /= 4; //50
    pizzasToEat %= 5; //0
    
    printf("pizzasToEat: %i\n", pizzasToEat);
    
    return 0;
}