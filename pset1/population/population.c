#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startSize = get_int("Start size: ");
    while (startSize < 9)
    {
        startSize = get_int("Start size: ");
    }

    // TODO: Prompt for end size
    int endSize = get_int("End size: ");
    while (endSize < startSize)
    {
        endSize = get_int("End size: ");
    }
    // TODO: Calculate number of years until we reach threshold
    // population = start size + lamas born + lamas that die
    int currentPopulation = startSize;
    int years = 0;

    while(currentPopulation < endSize)
    {
        int born = currentPopulation/3;
        int die = currentPopulation/4;
        currentPopulation = currentPopulation-die+born;
        printf("%i/n", currentPopulation);

        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}

