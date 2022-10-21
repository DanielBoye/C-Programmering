#include <stdio.h>

int main(void)
{
    char ASCII;
    printf("Please enter a character: ");
    scanf("%c\n", &ASCII);
    printf("%i\n", ASCII);

    int integer;
    printf("Please enter an integer between 0 - 127");
    scanf("%i", &integer);
    printf("%c\n", integer);
    return 0;
}