#include <stdio.h>
#include <string.h>


static char input[2048];

int main(int argc, char** argv) {
	puts("Get rekt case version 1.0.0");
	puts("Type in an adjective with a bad connotation, and we can see if it pertains to case :)");
	puts("Click Ctrl-C to quit the rekage");

	while(1) {
		fputs("kushalrekbot> ", stdout);
		fgets(input, 2048, stdin);
		if (strcmp(input, "") == 0) {
			printf("c is empty please enter an adjective\n");
		} else {
			printf("Case is %s", input);
			printf("Get rekt case\n");
		}
	}

	return 0;
}

