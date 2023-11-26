#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    // Program run with one command-line argument
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
        // Convert argv[1] from a `string` to an `int`
  int key = atoi(argv[1]);
    // Make sure every character in argv[1] is a digit
    int realKey = key % 26;

    // Prompt user for plaintext
    string input = get_string("plaintext: ");
    int inputLength = strlen(input);

    int resultArray[inputLength];

    printf("ciphertext: ");
    // A loop to iterate over the input string
    for (int i = 0; i < inputLength; i++)
    {
        if (isalpha(input[i]))
        {
            int charDecimal = (int) input[i];

            // Rotate the character if it's a letter
            if (charDecimal > 64 && charDecimal < 91)
            {
                if (charDecimal + realKey > 90)
                {
                    printf("%c", (char) charDecimal - 26 + realKey);
                }
                else
                {
                    printf("%c", (char) charDecimal + realKey);
                }
            }
            else if (charDecimal > 96 && charDecimal < 123)
            {
                if (charDecimal + realKey > 122)
                {
                    printf("%c", (char) charDecimal - 26 + realKey);
                }
                else
                {
                    printf("%c", (char) charDecimal + realKey);
                }
            }
        }
        else
        {
            printf("%c", input[i]);
        }
    }
    printf("\n");
    return 0;
}
