#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // sleep() uses seconds, not ms, and in an unsigned int, but usleep() uses microseconds so add 3 zeros

int main() {
    FILE *file;
    printf("PLOT OF THE DEAD\nCR577/CREATING REALITIES STUDIOS MMXXIII\n");
    sleep(2);
    system("clear");
    file = fopen("title.txt", "r");
    char title[600];
    while(fgets(title, 600, file)) {
        usleep(400000);
        printf("%s", title);
        fflush(stdout);
    }
    fclose(file);
    sleep(2);
    int enter = 0;
    printf("\nPRESS ENTER TO PLAY");
    while (enter != '\n') { enter = getchar(); }
    return 0;
}