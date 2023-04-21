#include <stdio.h>
int main(void)
{
	int age;
	
	printf("Input your age: ");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("Your age is %d, you are an adult", age);
	}
	return (0);
}
