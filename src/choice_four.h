#include <stdio.h>
int choice_four() {
    FILE *choice_four;
    choice_four = fopen("yourscript.sh", "a");

    fprintf(choice_four, "\nadb shell pm uninstall -k --user 0 com.android.stk");
    fprintf(choice_four, "\nadb shell pm uninstall -k --user 0 com.android.stk2");
    fprintf(choice_four, "\nadb shell pm uninstall -k --user 0 com.android.protips");
    fprintf(choice_four, "\nadb shell pm uninstall -k --user 0 com.android.facelock");
    fprintf(choice_four, "\nadb shell pm uninstall -k --user 0 com.android.egg");
    
    fclose(choice_four);
}