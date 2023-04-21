#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

#define MAX_SIZE 100

/**
 * sort_age - sorts age
 * @n: number of elements
 * @Age: age array
 * Return: 0 always
 */
int main(void)
{
	int i, n, Age[MAX_SIZE];

	printf("Enter the numbers of elements in the array: ");
	scanf("%d", &n);

	printf("Enter %d ages:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &Age[i]);
	}
	sort_age(Age, n);
	printf("Sorted ages:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d", Age[i]);
	}
	printf("\n");
	return (0);
}
