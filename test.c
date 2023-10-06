#include <stdio.h>

int main(void)
{
	int x = 10;
	int *ptr;
	ptr = &x;
	printf("value of x     :  %d\n", x);
	printf("addres of x     :  %u\n", &x);
	printf("addres of x     :  %u\n", ptr);
	printf("value of x     :  %d\n", *ptr);
	printf("value of x     :  %d\n", *ptr);
}

