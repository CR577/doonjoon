#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>  // sleep() uses seconds, not ms, and in an unsigned int, but usleep() uses microseconds so add 3 zeros

void say(char tosay[], unsigned int lettertime, unsigned int finishtime) {
    // remember to add lettertime and finishtime since no default vals
    for (int i = 0; i <= strlen(tosay); i++) {
        printf("%c", tosay[i]);
        fflush(stdout);
        usleep(lettertime);
    }
    printf("\n");
    usleep(finishtime);
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
    printf("\n");
    sleep(2);
    int enter = 0;
    printf("\nPRESS ENTER TO PLAY");
    while (enter != '\n') { enter = getchar(); }
    say("yippee yahoo hip hip hooray\nit's-a me, mario", 35000, 1000000);
    return 0;
}