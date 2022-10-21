#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool danielIsFat = true; 
    
    printf("Is Daniel fat (1 is yes, 0 is no)? %i\n", danielIsFat);
    
    printf("%i\n", danielIsFat + 10);
    return 0;
}