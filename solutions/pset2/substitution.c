#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2 && strlen(argv[1]) == 26)
    {
        char check;
        int count;
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key has to be alphabetical characters.\n");
                return 1;
            }
            check = argv[1][i];
            count = 0;
            for (int k = 0; k < strlen(argv[1]); k++)
            {
                if (check == argv[1][k])
                {
                    count++;
                }
            }
            if (count > 1)
            {
                printf("Key must not contain duplicates.\n");
                return 1;
            }
        }
        string plaintext = get_string("plaintext: ");
        int p;
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (islower(plaintext[i]))
            {
                plaintext[i] -= 97;
                p = plaintext[i];
                if (isupper(argv[1][p]))
                {
                    argv[1][p] += 32;
                }
                plaintext[i] = argv[1][p];
            }
            else if (isupper(plaintext[i]))
            {
                plaintext[i] -= 65;
                p = plaintext[i];
                if (islower(argv[1][p]))
                {
                    argv[1][p] -= 32;
                }
                plaintext[i] = argv[1][p];
            }
        }
        printf("ciphertext: %s\n", plaintext);
        return 0;
    }
    else
    {
        if (argc != 2)
        {
            printf("Usage: ./substitution key\n");
        }
        else
        {
            printf("Key must contain 26 characters.\n");
        }
        return 1;
    }
}