#include <stdio.h>
#include <cs50.h> 

int main(void) 
{
    
    
    int n; //Loop that makes the user prompt a input between 1-8
    do
    {
        n = get_int("Height: "); //Ask user for height
    }
    while (n > 8 || n < 1); //Makes user prompt a number between 1-8
    
    
    
    for (int i = 0; i < n; i++) //A loop that will run this code under me while n is bigger than i
    {
        
        for (int d = n - 1 ;  d > i ; d =  d - 1) //Calculates how many spaces to print
        {
            printf(" "); //Code for printing out spaces
        }
        
        
        for (int h = -1; h < i; h++) //Calculates how many hashes to print
        {
            
            printf("#"); //Prints out hashes
        } 
        
        
        printf("\n"); //Prints out a new line
    }
}

