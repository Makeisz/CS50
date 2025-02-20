#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");
    }
    while (height < 1);
    int hash_holder = 1;
    int hash = 1;
    int space;

    while (height > 0)
    {
        space = height - 1;
        while (space > 0)
        {
            printf(" ");
            space--;
        }
        if (space == 0)
        {
            hash_holder = hash;
            while (hash_holder > 0)
            {
                printf("#");
                hash_holder--;
            }
        }
        printf("\n");
        hash++;
        height--;
    }
}
