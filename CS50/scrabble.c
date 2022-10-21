#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    
    if (score1 > score2) //Loop that will print out ... if score1 is bigger than score2
    {
        printf("Player 1 wins!\n"); //A simple printf that prints out the winner announcement
    }
        
    else if (score1 < score2)
    {
        printf("Player 2 wins1\n"); //Prints out the announcement that player two wins
    }
    
    else 
    {
        printf("Tie!\n"); //If the statements is not true it will print out ´Tie
    }

}

    
    
int compute_score(string word)
{
    //Score tracker for declaring a winner
    int score = 0;
    
    // TODO: Compute and return score for string
    for (int i = 0, len = strlen(word); i < len; i++) //A loop that will check the work for vaules
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A']; 
        }
        
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
        
    }
    
    return score; //Returns the variabe score
    
}