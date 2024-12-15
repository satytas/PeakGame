#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include "sio.h"

const char* deleteL = "\033[2K";
const char* moveUp = "\033[A";
const char* moveDown = "\033[B";
const char* moveToTheRight = "\033[G";
const char* moveToTheLeft = "ESC[999C";
const char* F[] = {
    [red] = "\033[31m",
    [orange] = "\033[38;5;208m", // Approximation using 256-color mode
    [yellow] = "\033[33m",
    [limeGreen] = "\033[38;5;154m", // Approximation using 256-color mode
    [green] = "\033[32m",
    [cyan] = "\033[36m",
    [blue] = "\033[34m",
    [purple] = "\033[35m",
    [pink] = "\033[38;5;200m", // Approximation using 256-color mode
    [black] = "\033[30m",
    [gray] = "\x1b[38;5;240m",
    [white] = "\033[37m",
    [bold] = "\033[1m",
    [res] = "\033[0m"
};
const char* B[] = {
    [red] = "\033[41m",
    [orange] = "\033[48;5;208m", // Approximation using 256-color mode for background
    [yellow] = "\033[43m",
    [limeGreen] = "\033[48;5;154m", // Approximation using 256-color mode for background
    [green] = "\033[42m",
    [cyan] = "\033[46m",
    [blue] = "\033[44m",
    [purple] = "\033[45m",
    [pink] = "\033[48;5;200m", // Approximation using 256-color mode for background
    [black] = "\033[40m",
    [gray] = "\x1b[48; 5; 240m",
    [white] = "\033[47m",
    [res] = "\033[0m" // Reset doesn't typically apply to backgrounds but included for completeness
};

void printd(float amplifier, const char* str, ...) {
#define delay 15

    va_list args;
    va_start(args, amplifier);

    const char* color = va_arg(args, const char*);

    do {
        if (color != NULL)
            printf("%s", color);
        else
            printf("%s", F[res]);

        while (*str) {
            putchar(*str++);
            if (amplifier > 0)
                Sleep((int)(amplifier * delay));
        }

        printf("%s", F[res]);

        if (color != NULL) {
            str = va_arg(args, const char*);
            if (str != NULL)
                color = va_arg(args, const char*);
        }
        else
            str = NULL;
    } while (str != NULL);

    va_end(args);
}

int cntD(int n) {
    int cnt = 0;
    do {
        n /= 10;
        cnt++;
    } while (n > 0);
    return cnt;
}

char* toString(int num) {
    // Allocate memory for the string
    // 12 characters are enough for any 32-bit integer, including the sign and null terminator
    char* str = malloc(12 * sizeof(char));
    if (str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL; // Return NULL if memory allocation fails
    }

    // Convert the integer to a string
    sprintf(str, "%d", num);

    return str; // Return the dynamically allocated string
}