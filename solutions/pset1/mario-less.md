<pre>
#include \<stdio.h\>
#include \<cs50.h\>

int main(void) 
{
    int height;
    do 
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int s = 1; s < height - i; s++)
        {
            printf(" ");
        }
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
</pre>
