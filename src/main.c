#include <stdio.h>
#include "choice_one.h"
#include "choice_two.h"
#include "choice_three.h"
#include "choice_four.h"
#include "choice_five.h"

int welcome() {
    printf("#######################################\n");
    printf("SAFR - StupidAndroidFeatureRemover\nBy JBNCK\n#######################################\n");

    printf("Program syntax:\n");
    printf("0 = no, 1 = yes\n\n\n");
}

int main() {

    int c1, c2, c3, c4, c5;

    system("touch yourscript.sh");
    FILE *setup;
    setup = fopen("yourscript.sh", "w");
    fprintf(setup, "#!/bin/sh\nadb kill-server\nsudo adb start-server\necho 'Do not worry if you see some errors!'");
    fclose(setup);
    welcome();
    
    /*Choices*/
        printf("#######################################\n");


        printf("Do you have top and bottom bezel/\nscreen border? (removes gestures)\nAnswer: ");
        scanf("%i", &c1);
        printf("\nYour choice: %i\n", c1);

        if (c1 == 1) {
            printf("Adding to script...\n");
            choice_one();
            printf("\nDone.\n");
        }
        else {
            printf("Skipping...\n");
        }
        printf("#######################################\n");


        printf("Do you want some of the Google spying\nremoved?\nAnswer: ");
        scanf("%i", &c2);
        printf("\nYour choice: %i\n", c2);

        if (c2 == 1) {
            printf("Adding to script...\n");
            choice_two();
            printf("\nDone.\n");
        }
        else {
            printf("Skipping...\n");
        }

        printf("#######################################\n");


        printf("Do you have a Samsung phone?\nAnswer: ");
        scanf("%i", &c3);
        printf("\nYour choice: %i\n", c3);

        if (c3 == 1) {
            printf("Adding to script...\n");
            choice_three();
            printf("\nDone.\n");
        }
        else {
            printf("Skipping...\n");
        }

        printf("#######################################\n");


        printf("Do you want to remove the other stuff?\n(See GitHub README!)\nAnswer: ");
        scanf("%i", &c4);
        printf("\nYour choice: %i\n", c4);

        if (c4 == 1) {
            printf("Adding to script...\n");
            choice_four();
            printf("\nDone.\n");
        }
        else {
            printf("Skipping...\n");
        }

        printf("#######################################\n");


        printf("Does your device have a qualcomm\nchipset?\nAnswer: ");
        scanf("%i", &c5);
        printf("\nYour choice: %i\n", c5);

        if (c5 == 1) {
            printf("Adding to script...\n");
            choice_five();
            printf("\nDone.\n");
        }
        else {
            printf("Skipping...\n");
        }

        printf("#######################################\n");


    FILE *endoffile;
    endoffile = fopen("yourscript.sh", "a");
    fprintf(endoffile, "\necho 'Script made with SAFR by JBNCK'");
    fclose(endoffile);

    return 0;
}