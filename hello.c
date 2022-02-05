#include <stdio.h>

int main(int argc, string argv[])
{
    printf("hello world! - %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("arg %d - %s, %i, %f\n", i, argv[i], atoi(argv[i]), atof(argv[i]));
    }
}