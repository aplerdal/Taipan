#pragma once
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define TYPE_DELAY 50*1000 // in microseconds

enum TerminalColors {
	TERM_COLOR_BLACK,
	TERM_COLOR_RED,
	TERM_COLOR_GREEN,
	TERM_COLOR_YELLOW,
	TERM_COLOR_BLUE,
	TERM_COLOR_MAGENTA,
	TERM_COLOR_CYAN,
	TERM_COLOR_WHITE,
};

void term_clear() {
	printf("\033[2J");
}
void term_resetStyle() {
	printf("\033[0m");
}
void term_setColor(int fg, int bg) {
	printf("\033[%d;%dm",fg+30, bg+40);
}
int term_getLine(char* prompt, char* dest, size_t size) {
	int ch, extra;

    // Get line with buffer overrun protection.
    if (prompt != NULL) {
        printf ("%s", prompt);
        fflush (stdout);
    }
    if (fgets (dest, size, stdin) == NULL)
        return 1;

    // If it was too long, there'll be no newline. In that case, we flush
    // to end of line so that excess doesn't affect the next call.
    if (dest[strlen(dest)-1] != '\n') {
        extra = 0;
        while (((ch = getchar()) != '\n') && (ch != EOF))
            extra = 1;
        return (extra == 1) ? 2 : 0;
    }

    // Otherwise remove newline and give string back to caller.
    dest[strlen(dest)-1] = '\0';
    return 0;
}
void term_typef(const char* format, ...) {
	char* buffer;
	va_list argptr;
    va_start(argptr, format);
    vasprintf(&buffer, format, argptr);
    va_end(argptr);
    
    for (int i = 0; i < strlen(buffer); i++) {
    	printf("%c",buffer[i]);
    	usleep(TYPE_DELAY);
    }
    
    free(buffer);
}
void term_dtypef(int delay, const char* format, ...) {
	char* buffer;
	va_list argptr;
    va_start(argptr, format);
    vasprintf(&buffer, format, argptr);
    va_end(argptr);
    
    for (int i = 0; i < strlen(buffer); i++) {
    	printf("%c",buffer[i]);
    	usleep(delay);
    }
    
    free(buffer);
}
