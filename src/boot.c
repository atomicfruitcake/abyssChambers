#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif



void displayLoader() {
    #define MAX 100000
    #define WIDTH 100
    long i;
    float progress = 0.0;
    int c = 0, x = 0, lastC = 0;
    printf("Loading Abyss Chambers\n");
    fprintf(stderr, "%3d%% [", (int) progress);
    for (x = 0; x < c; x++) {
        fprintf(stderr, "=");
    }
    for (x = c; x < WIDTH; x++) {
        fprintf(stderr, " ");
    }
    fprintf(stderr, "]");
    for (i = 1; i < MAX + 1; i++) {
        progress = i * 100.0 / MAX;
        c = (int) progress;

        fprintf(stderr, "\n\033[F");
        fprintf(stderr, "%3d%%", (int) progress);
        fprintf(stderr, "\033[1C");
        fprintf(stderr, "\033[%dC=", lastC);
        for (x = lastC; x < c; x++) {
            fprintf(stderr, "=");
        }
        if (x < WIDTH) {
            fprintf(stderr, ">");
        }
        lastC = c;
    }

    fprintf(stderr, "\033[ELoading Complete\n\n\n");
}