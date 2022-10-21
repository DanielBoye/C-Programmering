#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change; //Ask user about change
    do //This loop will run until user puts in a positive number
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);


    //Converts dollar to cents
    int convertCents = round(change * 100);
    
    //Sets value 0 to the variable coins
    int coins = 0;

    //Sets a value to every coin
    int quarter = 25;
    
    int dime = 10;
    
    int nickels = 5;
    
    int pennies = 1;
    
    //A while loop that will run when the currency is bigger or at the same value
    while (convertCents >= quarter)
    {
        convertCents = convertCents - quarter; //Will subtract a quarter if convertCents is bigger or like a quarter
        coins++;
    }
        
    while (convertCents >= dime)
    {
        convertCents = convertCents - dime; //Will subtract a dime if convertCents is bigger or like a dime
        coins++;
    }
   
    while (convertCents >= nickels)
    {
        convertCents = convertCents - nickels; //Will subtract a nickle if convertCents is bigger or like a nickles
        coins++;
    }
    
    while (convertCents >= pennies)
    {
        convertCents = convertCents - pennies; //Will subtract a penny if convertCents is bigger or like a penny
        coins++;
    }
      
    printf("%d\n", coins); //Prints out how many coins you will get    
}

