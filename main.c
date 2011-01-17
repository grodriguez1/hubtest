/* main.c */
#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
	var gab;//just added a new line from github online
	char first[255], last[255];

	askname(first, last);

	printf("Hello, %s %s!\n", first, last);
 	return 0;
}