#include <stdio.h>
#include <stdlib.h>
/**
 * sort_age - sorts ages from lowest to highest
 * @Age: an array of ages
 * @n: total number of ages in array Ages
 *
 * Return: Nothing
 */

void sort_age(int *Age, int n)
{       
        int i, j, temp;

        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n - 1; j++)
                {
                        if (Age[j] < Age[j + 1])
                        {
                                temp = Age[j];
                                Age[j] > Age[j + 1];
                                Age[j] = Age[j + 1];
                                Age[j + 1] = temp;
                        }
                }
        }
}
