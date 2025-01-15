#include <stdio.h>
#include <stdlib.h>
#include "term.c"

#define PORT_COUNT 10
const char* port_names[] = {"Hong Kong", "Batvia", "Saigon", "Manila", "Singapore", "Shanghai", "Nagasaki", "Edo", "Canton", "Calcutta"};

char name[32];
size_t name_len = 0;
int home_port;
int year = 1847;

void intro();
void game();

int main(int argc, char** argv) {
	intro();
	game();
}

void intro() {
	char input[16];
	term_clear();
	printf("[      TAIPAN      ]\nPress enter to begin\n");
	fgets(input, 16, stdin);
nameSelect:
	term_clear();
	//if (name != NULL) free(name);
	printf("What is your company named?\n");
	size_t read = fgets(name, 32, stdin);
	if (read != 0) {
		name[strcspn(name, "\n")] = 0;
		printf("You now run the %s Trading Company. Is this correct? [y/n]\n", name);
		fgets(input, 16, stdin);
		if (!(input[0]=='y' || input[0]== 'Y')) goto nameSelect;
	} else {
		goto nameSelect;
	}
portSelect:
	term_clear();
	printf("Choose a home port:\n");
	printf("\t #  | City:     | Colony of:\n");
	printf("\t[1] | Hong Kong | England\n");
	printf("\t[2] | Batvia    | Netherlands\n");
	printf("\t[3] | Saigon    | France\n");
	printf("\t[4] | Manila    | Spain\n");
	printf("\t[5] | Singapore | England\n");
	fgets(input, 16, stdin);
	if (!(input[0] >= '1' && input[0] <='5')) goto portSelect;
	home_port = input[0] - '1';
	printf("Setting sail to %s.\nPress enter to begin...", port_names[home_port]);
	fgets(input, 16, stdin);
}

void game() {
	term_clear();
	term_dtypef(100*1000,"[[ %s, %d ]]", port_names[home_port], year);
}
