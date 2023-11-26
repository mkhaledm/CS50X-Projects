#include <cs50.h>
#include <ctype.h>
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
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2 )
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string

    // Track the score
    int score = 0;

    // Compute score for each character
    for (int i = 0, len = strlen(word); i < len; i++)
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
    return score;
}


-----------
(Explanation the code);

// In order to figure out how many points the word is worth, we want to go through each of the character one by one,
// and figure out how much each character is worth adding up all of those results.

// We have an integer called score equal to zero and that variable is going to keep track of the score for the current word,

int score = 0;

// Now what we need to do is loop over the entire word, looking at each character one at a time,
//  to do so we have a for loop where we start with int i equals 0.

int i = 0,
// i is going to represent the index of the character, and in order to complete this loop, we need to know how long the string is.

// So to do that we can use the strlen function to access the length of the string, storing that inside of a variable called len.

len = strlen(word);

// We're going to repeat this loop as long as i is less than len,

i < len;

// Increasing i by one every time this loop completes an iteration.

i++

// There two cases we need to consider here, this character might be an uppercase letter,
//in which case it's worth points, or it might be a lowercase letter, in which case it's also going to be worth some number of points.
// and for any other type of character, like a digit or a punctuation or a space, thoe are not going to be worth any points at all.

// So let's first deal with the uppercase situation, we can use the isupper function to check if any particualr character is an uppercase letter,

(isupper)

// And so we can check for word square bracket i, (word[i]),
// meaning take that string "word" and access character i for whatever i happens to be for this iteration of the loop,
// If this current character, word bracket i is an uppercase letter, well then we need to update the score.
// How will we know how to update the score?, we're going to use that POINTS array at the top of our file,
// this array give us the point value for each letter of the alphabet, where points square brackets 0 represents the score for the letter A points square bracket 1 represents the score for the letter B, and so on.

// It saying square bracket i minus capital A,
// that is going to give me an index value, if word square bracket i is capital A, then it's capital A miuns capital A, that's zero.
// So by putting that in square brackets inside of POINTS, i can access how many points that particular character is going to be worth.
// Whatever number of points that character is worth, i'm going to then add that to the score, and that's going to update the value of score in response to this character.

POINTS[word[i] - 'A'];

// And at the end, once we have our final value for score, we can return the value of score.

return score;
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
