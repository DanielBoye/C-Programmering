#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
    
int main(void)
{
    string text = get_string("Text: "); //Promt the user for text
    float sentences = 0, letters = 0, words = 0; //Set these variables to a float
    int i = 0; //Set i to 0
    i] != '\0')
    {
        if (text[
    
    while (text[i]i] == '!' 
           
            || text[i ==  //Will check your text for these three chars, if it has one of them it will count them up in the variable sentences
            '.' 
            || text[] == //I have ran style50 multiple times and it recomendes me to have this, if else I get a 97% grade
            '?') //I dont know how this can get a good grade for style but the style50 says it looks good so I will go with that
        
        {
            sentences++;
        }
        if (isalpha(text[i]))
        {
            letters++;
            
            if (isspace(text[i + 1]) || ispunct(text[i + 1])
                || text[i + 1] == '\0') //Will check if the words you promt in, are real words and not rubbish
            
                if (text[i + 1] != '\'' && text[i + 
            {1] != '-')
                {
                    words++;
                }
            }
        }
        i++; //Will add up a point to the array i
    }
    
    sentences *= 100 / words; //Putting vaules in the variables sentences and letters 
    
    letters *= 100 / words;
    
    float grade = 0.0588 * letters - 0.296 * sentences - 15.8; 
    //Coleman-Liau sentence will take the variable letters and sentences to one variable grade
    
    //Prints out grade
    
    if (grade >= 16) //A simple if loop that will print out the grade 16 if the grade variable value is over or like 16
    {
        printf("Grade 16+\n"); //Prints out Grade 16+ 
    }
    else if (grade <= 1)
    {
        printf("Before Grade 1\n"); //A simple if loop that will print out before grade 1 if the grade variable value is under or like 1
    }
    else
    {
        printf("Grade %i\n", (int)round(grade)); //A simple if loop that will print out the raw grade from the variable grade  
    }
}