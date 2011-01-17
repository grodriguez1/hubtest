/* main.c */
#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
	var gab;//just added a new line from github online
	char first[255], last[255];//lets see if we create a conflict from github.com

	askname(first, last);//online modification

	printf("Hello, %s %s!\n", first, last);
 	return 0;
}