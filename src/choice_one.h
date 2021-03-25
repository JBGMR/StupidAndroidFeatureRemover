#include <stdio.h>
int choice_one() {
    FILE *choice_one;
    choice_one = fopen("yourscript.sh", "a");

    fprintf(choice_one, "\nadb shell pm uninstall -k --user 0 com.android.internal.systemui.navbar.gestural");
    fprintf(choice_one, "\nadb shell pm uninstall -k --user 0 com.android.internal.systemui.navbar.gestural_wide_back");
    fprintf(choice_one, "\nadb shell pm uninstall -k --user 0 com.android.internal.systemui.navbar.gestural_extra_wide_back");
    fprintf(choice_one, "\nadb shell pm uninstall -k --user 0 com.android.internal.systemui.navbar.gestural_narrow_back");
    fprintf(choice_one, "\nadb shell pm uninstall -k --user 0 com.android.internal.systemui.navbar.twobutton");

    fclose(choice_one);
}