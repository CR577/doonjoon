#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>  // sleep() uses seconds, not ms, and in an unsigned int, but usleep() uses microseconds so add 3 zeros

int say(char tosay[], unsigned int lettertime, unsigned int finishtime) {
    for (int i = 0; i <= strlen(tosay); i++) {
        printf("%c", tosay[i]);
        fflush(stdout);
        usleep(lettertime);
    }
    usleep(finishtime);
    return 0;
}

int main() {
    FILE *file;
    printf("DOONJOON\nCR577/CREATING REALITIES STUDIOS MMXXIII\n");
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
    say("yippee yahoo hip hip hooray", 25000, 1000000);  // works (yay!), remember to add lettertime and finishtime since no default vals
    return 0;
}