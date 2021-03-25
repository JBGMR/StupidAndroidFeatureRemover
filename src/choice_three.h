#include <stdio.h>
int choice_three() {
    FILE *choice_three;
    choice_three = fopen("yourscript.sh", "a");

    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.rubin.app");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 de.axelspringer.yana.zeropage");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.app.spage");

    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.app.settings.bixby");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.app.routines");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.bixby.service");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.bixby.agent");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.bixbyvision.framework");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.bixby.wakeup");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.bixby.agent.dummy");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.visionintelligence");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.systemui.bixby2");

    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.microsoft.appmanager");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.microsoft.skydrive");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.touchtype.swiftkey");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.swiftkey.swiftkeyconfigurator");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.linkedin.android");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.samsung.android.mdx");

    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.netflix.mediaclient");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.spotify.music");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.netflix.partner.activation");

    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.facebook.katana");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.facebook.system");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.facebook.services");
    fprintf(choice_three, "\nadb shell pm uninstall -k --user 0 com.facebook.appmanager");

    fclose(choice_three);
}