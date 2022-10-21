#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    string textf = get_string("Plaintext: ");
    int m = strlen(textf);
    
    for (int j = 0; j < m; j++)
    {  
    
    
    
    if (argc != 2)
    
    {
        printf("Usage: ./caesar key\n");
    }
    
    else if (argc == 0)
    
    {
        printf("Usage: ./caesar key\n");
    }
    
    else if (argc > 1)
    {
        
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            
            if (isdigit(argv[1][i]))
            {
                
                
                int key = atoi(argv[1]);
                
                for (int j = 0; j < m; j++)
                {
                    if (islower(textf[j]))
                    {
                        textf[j] = (((textf[j] - 'a') + key) % 26) + 'a';
                    }
                    
                    else if (isupper(textf[j]))
                    {
                        textf[j] = (((textf[j] - 'A') + key) % 26) + 'A';
                    }
                }
                printf("Ciphertext: %c", (textf[j]));
                return 0;
            }   
            else
            {
                printf("Key needs to be numeric\n");
                return 1;
            }
        }   
    }
     else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
    return 0;
    }
}
