#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h <= 0);
    for (int i = 1; i <= h; i++)
    {
        for (int j = h; j > i; j--)
        {
            printf(" ");
        }
        for (int a = 1; a <= i; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}