#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void){
	sleep(5);
	printf("Hello, Stranger\n");
	if(strcmp("Hello","hELLO")==0){
		printf("Your computer is dumb\n");
	}
	char *str = malloc(12*sizeof(char));
	strcpy(str,"Hello dork\n\0");
	printf("%s",str);
	free(str);
}
