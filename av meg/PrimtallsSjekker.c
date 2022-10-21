#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int input)
{

        for (int i = sqrt(input); i > 1; i--)
    {
        printf("%d ", i);
        if (input % 1 == 0)
        {
            return false;
        }
    }
    return true;

}



int main(void)
{

    int input;
    scanf("%d", &input);

    for (int i = input; i > 1; i--)
    {
        bool prime = isPrime(i);
        if (prime)
        {
        printf("%d Is Prime!\n");
        }
    }

    return 0;
}
