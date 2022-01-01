<pre>
// messy, I know - but it works!
#include \<stdio.h\>
#include \<cs50.h\>

long long get\_cc\_number(void);
long long luhn(void);
int get\_last\_digits(void);
long long cc\_number;
int digit\_count = 0;
long long first\_digits;

int main(void)
{
    cc_number = get_cc_number();
    int total = luhn();
    first_digits = cc_number;
    for (int i = 0; i < digit_count - 2; i++)
    {
        first_digits /= 10;
    }
    if (digit_count == 13 || digit_count == 15 || digit_count == 16)
    {
        if (total % 10 == 0)
        {
            if (first_digits == 34 || first_digits == 37)
            {
                printf("AMEX\n");
            }
            // added 22 because it was a common starting number for the test cards
            else if (first_digits == 51 || first_digits == 52 || first_digits == 53 || first_digits == 54 || first_digits == 55 || first_digits == 22)
            {
                printf("MASTERCARD\n");
            }
            else if ((first_digits / 10) == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
        printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

long long get\_cc\_number(void)
{
    long long number;
    do
    {
        number = get_long_long("AMEX, MASTERCARD or VISA credit card number: ");
    }
    while (number < 0);
    return number;
}

long long luhn(void)
{
    long long spare = cc_number;
    long long spare2 = cc_number;
    long long spare3 = cc_number;
    long long digit;
    long long msum = 0;
    long long sum = 0;
    int total;
    while (spare != 0)
    {
        spare /= 10;
        digit_count++;
    }
    for (int i = 1; i <= digit_count; i += 2)
    {
        spare2 /= 10;
        digit = (spare2 % 10) * 2;
        if (digit > 9)
        {
            digit -= 10;
            msum += 1;
        }
        msum += digit;
        spare2 /= 10;
    }
    for (int i = 0; i <= digit_count; i += 2)
    {
        digit = spare3 % 10;
        sum += digit;
        spare3 /= 100;
    }
    total = msum + sum;
    return total;
}
</pre>
