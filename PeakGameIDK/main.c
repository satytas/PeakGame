#include <stdio.h>
#include <windows.h>
#include "game_manager.h"

void enable_virtual_terminal_processing() {
    DWORD dwMode = 0;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    if (hStdOut == INVALID_HANDLE_VALUE) {
        printf("Error: Could not get handle to stdout\n");
        return;
    }

    if (!GetConsoleMode(hStdOut, &dwMode)) {
        printf("Error: Could not get console mode\n");
        return;
    }

    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    if (!SetConsoleMode(hStdOut, dwMode)) {
        printf("Error: Could not set console mode\n");
        return;
    }

    printf("Virtual terminal processing enabled\n");
}

int main() {

    intro();

    return 0;
}
