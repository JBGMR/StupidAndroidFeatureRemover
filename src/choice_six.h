#include <stdio.h>
int choice_six() {
	FILE *choice_six;
	choice_six = fopen("yourscript.sh", "a");

	fprintf(choice_six, "\nadb shell pm uninstall -k --user 0 com.android.chrome");

	fclose(choice_six);
}
