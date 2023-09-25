#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit = get_long("Number: ");
    int a = 0;
    int b = 0;
    int c = 0;
    long e = credit;
    int f = 0;
    while (e > 100)
    {
        e /= 10;
        f++;
    }
    while (credit > 0)
    {
        a += credit % 10;
        credit = credit / 10;
        b = (credit % 10) * 2;
        c += (b % 10) + (b / 10);
        credit = credit / 10;
    }
    int d = a + c;
    if ((d % 10) == 0)
    {
        if ((e == 34 || e == 37) && (f + 2 == 15))
        {
            printf("AMEX\n");
        }
        else if ((e == 51 || e == 53 || e == 52 || e == 54 || e == 55) && (f + 2 == 16))
        {
            printf("MASTERCARD\n");
        }
        else if (((e / 10) == 4) && ((f + 2 == 13) || (f + 2 == 16)))
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