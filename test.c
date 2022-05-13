//Test strcpy, strcmp, puts, printf, malloc and sleep
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(void){
	sleep(5);
	puts("The sleep is done!");
	printf("Testing printf %d %d\n",55,99);
	if(strcmp("Hello","hELLO")==0){
		printf("strcmp is not functioning right.\n");
		return EXIT_FAILURE;
	}
	printf("strcmp works!\n");
	char *str = malloc(15*sizeof(char));
	if(str == 0){
		printf("Your computer has no memory! (Or Something like that.)");
		return EXIT_FAILURE;
	}
	strcpy(str,"strcpy works!\n\0");
	printf("%s",str);
	free(str);
	return EXIT_SUCCESS;
}
