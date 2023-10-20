#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>

/**
*struct list_s - singly linked list
* @string: string
* @lenth: length of  string
* @next: points to next node
*/
typedef struct list_s
{
	char *string;
unsigned int lenth;
struct list_s *next;
} list_t;

int _putchar(char c);
