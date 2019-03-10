#include <stdio.h>
#include "Filesys.h"

void Colors() {
	if (OperatingSystemType == 1) printf("%s", ORANGE);
        if (OperatingSystemType == 2) printf("%s", RED);
        if (OperatingSystemType == 3 || OperatingSystemType == 99) printf("%s", BLUE);
	if (OperatingSystemType == 4) printf("%s", GREEN);
}

void FileLoader() {
        int filecontents;

        Colors();

	if (!file) {
                printf("Error Loading %d\n", wfile);
        }
        else {
                while ((filecontents = getc(file)) != EOF)
                        putchar(filecontents);
                fclose(file);
        }
	printf("%s", NORM2);
}

