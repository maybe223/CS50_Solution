#include <cs50.h>
#include <stdio.h>

int main()
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    int n = 0;
    for (; start < end; n++)
    {
        start = start + (int) (start / 3) - (int) (start / 4);
    }
    // TODO: Print number of years
    printf("Years: %d \n", n);
}
