#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const* argv[])
{
    srand(time(NULL));

    for (size_t i = 0; i <= 100; i++)
    {
        int first = rand() % 7;
        int second = rand() % 7;
        printf("Summa ohckov: %d\n", first + second);
    }

    return 0;
}