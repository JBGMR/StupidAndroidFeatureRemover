#include <stdio.h>
int choice_seven() {
	FILE *choice_seven;
	choice_seven = fopen("yourscript", "a");

	fprintf(choice_seven, "\nadb shell pm uninstall -k --user 0 com.android.vending");

	fclose(choice_seven);
}
