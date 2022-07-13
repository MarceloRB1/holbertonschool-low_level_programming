#ifndef lists_h
#define lists_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - singly linked list
 * @str: string of char
 * @len: integer
 * @next: pointer to the next node
 */

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

int _strlen(const char *s);
int _putchar(char c);
size_t print_list(const list_t *h);
