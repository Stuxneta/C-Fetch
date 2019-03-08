#include <stdio.h>
#include "art.h"

void UbuntuLogo() {
        int ubuntulogocontents;
        FILE *file;
        file = fopen("Graphics/Ubuntu.txt", "r");
        printf("%s", ORANGE);
        if (file) {
                while ((ubuntulogocontents = getc(file)) != EOF)
                        putchar(ubuntulogocontents);
                fclose(file);
        }
        printf("%s", NORM);

}

void DebianLogo() {
        int debianlogocontents;
        FILE *debianfile;
        debianfile = fopen("Graphics/Debian.txt", "r");
        printf("%s", RED);
        if (debianfile) {
                while ((debianlogocontents = getc(debianfile)) != EOF)
                        putchar(debianlogocontents);
                fclose(debianfile);
        }
        printf("%s", NORM);
}

void ArchLogo() {
        int archlogocontents;
        FILE *archfile;
        archfile = fopen("Graphics/Arch.txt", "r");
        printf("%s", BLUE);
        if (archfile) {
                while ((archlogocontents = getc(archfile)) != EOF)
                        putchar(archlogocontents);
                fclose(archfile);
        }
        printf("%s", NORM2);
}

void ManjaroLogo() {
        int manjarologocontents;
        FILE *manjarofile;
        manjarofile = fopen("Graphics/Manjaro.txt", "r");
        printf("%s", GREEN);
        if (manjarofile) {
                while ((manjarologocontents = getc(manjarofile)) != EOF)
                        putchar(manjarologocontents);
                fclose(manjarofile);
        }
        printf("%s", NORM2);
}

void GameCubeLogo() {
	int gamecubelogocontents;
	FILE *gamecubefile;
	gamecubefile = fopen("Graphics/GameCube.txt", "r");
	printf("%s", BLUE);
	if (gamecubefile) {
		while ((gamecubelogocontents = getc(gamecubefile)) != EOF)
			putchar(gamecubelogocontents);
		fclose(gamecubefile);

	}
	printf("%s", NORM2);
}
