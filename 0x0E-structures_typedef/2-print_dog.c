#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		if (d->age <= 0)
		{
			printf("Age: (nil)\n");
		} else
		{
			printf("Age: %.6f\n", d->age);
		}
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
