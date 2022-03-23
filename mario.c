#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int blockHeight = 0;
    do
    {
        blockHeight = get_int("Height: ");
    }
    while(blockHeight != >= 2 && <= 8);
}