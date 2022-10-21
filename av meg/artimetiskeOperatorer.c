#include <stdio.h>

int main(void)
{
    int piecesOfPizza = 5;
    int numberOfEaters = 2;
    int leftOver = piecesOfPizza % numberOfEaters;
    
    printf("%i\n", leftOver);
    return 0;
}

