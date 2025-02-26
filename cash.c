#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nicles(int cents);
int calculate_pennies(int cents);

int main(void)
{

    int cents;
    do
    {
        cents = get_int("Change owned: ");
    }
    while (cents < 0);

    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    int nicles = calculate_nicles(cents);
    cents = cents - nicles * 5;
    int pennies = calculate_pennies(cents);
    cents = cents - pennies;
    int result = quarters + dimes + nicles + pennies;
    printf("%i\n", result);
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nicles(int cents)
{
    int nicles = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nicles++;
    }
    return nicles;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents > 0)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}
