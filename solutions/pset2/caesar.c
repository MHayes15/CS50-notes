#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isalpha(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        string plaintext = get_string("Plaintext: ");

        int key = atoi(argv[1]);
        printf("Ciphertext: ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (plaintext[i] <= 122 && plaintext[i] >= 97)
            {
                printf("%c", (plaintext[i] - 97 + key) % 26 + 97);
            }
            else if (plaintext[i] <= 90 && plaintext[i] >= 65)
            {
                printf("%c", (plaintext[i] - 65 + key) % 26 + 65);
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}