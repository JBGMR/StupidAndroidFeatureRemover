#include <stdio.h>
int choice_five() {
    FILE *choice_five;
    choice_five = fopen("yourscript.sh", "a");

    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.qti.service.telemetry");
    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.location");
    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.qti.qms.service.connectionsecurity");
    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.atfwd");
    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.embms");
    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.qti.qms.service.trustzoneaccess");
    fprintf(choice_five, "\nadb shell pm uninstall -k --user 0 com.qualcomm.qti.optinoverlay");
    
    fclose(choice_five);
}