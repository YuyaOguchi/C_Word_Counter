/*
Yuya Oguchi
COEN 12 Lab1
1/12/15
Counting Words
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define MAX_WORD_LENGTH 30

int main(int argc, char *argv[]) {
	int counter;
	int i;
	char word[MAX_WORD_LENGTH];
	char input[50]; // name of the file

	FILE *list;
	list = fopen(argv[1],"r");
	if (list == NULL)
		printf("Can not open the file");

	while (fscanf(list,"%s", word) != EOF){
		counter += 1;
	}
	//always close the file
	close(list);

	printf("%i total words\n", counter);

	return 0;
}
