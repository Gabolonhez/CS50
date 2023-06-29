#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n = get_size(); 

    // Print grid of bricks
    print_grid(n);
}


int get_size(void)
{
    int n; 
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; 1 < size; i++)
    {
        printf ("#");
    }
    printf("\n");
} 