#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int calculate_level(float l, float w, float s);

int main(void)
{
    int letters = 0;
    int words = 0;
    int sentences = 0;
    int level;
    string input = get_string("Text: ");
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            letters++;
        }
        else if (input[i] == ' ')
        {
            words++;
        }
        else if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            sentences++;
        }
    }
    words += 1;
    level = calculate_level(letters, words, sentences);
    if (level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (level >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", level);
    }
}

int calculate_level(float l, float w, float s)
{
    float average_letters =  l / w * 100;
    float average_sentences = s / w * 100;
    float index = 0.0588 * average_letters - 0.296 * average_sentences - 15.8;
    return round(index);
}