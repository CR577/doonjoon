#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>  // sleep() uses seconds, not ms, and in an unsigned int, but usleep() uses microseconds so add 3 zeros

// RAIN, IF YOU ARE HERE, YOU DONT NEED TO BE! ITS OK, IVE GOT IT ALL COVERED!

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
    FILE *file;  // open title file and print the shint
    printf("DOONJOON\nCR577/CREATING REALITIES STUDIOS MMXXIIII\n");
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
    unsigned char potionInv[5];  // minor healing potion, major healing potion, speed potion, energy potion, mana potion
    memset(potionInv, 0, sizeof(potionInv));
    /* itemInv time!!!!
    WHAT'S GONNA HAPPEN
    we need a list of strings, each string being an item name
    ALTERNATIVELY
    we have a list of ints (unsigned probs) that are interpreted as specific items, thus eliminating the need for char[][] (is that even right?)
    ANYWAY
    gonna have int[]
    *tries int[]*
    OK SO
    maaaaaybe it would be better to have an array of bools
    with each *index* representing a specific item, since you can only have one of each item...
    but i do like the char[][] idea because it's adaptive...
    hgmhpmisnofisndmfnmmmmmmmmm
    IM GONNA DO CHAR[][] SOMEHOW
    I WILL. somehow.
    ill figure it out.

    this is fucking hell.
    WHY is
    fjhsfuoigfaa sgfyuodhsd vbyuia svbhuidsa a
    nope nuh uh fuck it im not doin that
    SEE YA LATER, DOONJOON!
    */
    return 0;
}