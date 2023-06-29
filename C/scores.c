#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int array[]);

int main(void)
{
   int score [N];
   for (int i = 0; i < 3; i++)
   {
        scores[i] = get_int("Score: ");
   }

    printf("Average: %f\n", average(N, scores));
}

float average int array(int lenght, int array[])
{
   int sum = 0;
   for (int i = 0; i < lenght; i++)
    {
        sum += sum + array[i];

    }
    return sum / (float) N;
}