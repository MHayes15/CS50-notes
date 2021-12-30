'''// expanded on this, program also tells you how much of each coin is owed
#include <stdio.h>
#include <cs50.h>
#include <math.h>

float get_cents(void);

int main(void)
{
    int cents = get_cents();
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int sum;
    while (cents >= 25)
    {
        cents -= 25;
        quarters++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        dimes++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        nickels++;
    }
    while (cents >= 1)
    {
        cents--;
        pennies++;
    }
    sum = quarters + dimes + nickels + pennies;
    printf("The least number of coins that satisfies this amount: %i\n", sum);   
    printf("Quarters: %i\n", quarters);
    printf("Dimes: %i\n", dimes);
    printf("Nickels: %i\n", nickels);
    printf("Pennies: %i\n", pennies);
}

float get_cents(void)
{
    float input;
    do 
    {
        input = get_float("Spare change amount in dollars: ");
    }
    while(input <=  0);
    input = round(input * 100);
    return input;
}
'''