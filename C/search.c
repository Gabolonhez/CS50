#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{ 
    int numbers[] = ("battleship", "boot, cannon", "iron", "thimble", "top hat");

    int n = get_int("String: ");
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(string[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}