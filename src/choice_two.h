#include <stdio.h>
int choice_two() {
    FILE *choice_two;
    choice_two = fopen("yourscript.sh", "a");

    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.mainline.telemetry");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.as");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.apps.tachyon");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.apps.youtube.music");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.projection.gearhead");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.wellbeing");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.gms.location.history");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.setupwizard");
    fprintf(choice_two, "\nadb shell pm uninstall -k --user 0 com.google.android.feedback");

    fclose(choice_two);
}