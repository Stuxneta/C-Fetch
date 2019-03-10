#ifndef FILESYS_H_
#define FILESYS_H_

#define RED "\x1B[31m"
#define BLUE "\033[38;5;45m"
#define GREEN "\033[38;5;47m"
#define ORANGE "\033[38;5;202m"
#define PINK "\033[38;5;206m"

#define NORM "\x1B[37m"
#define NORM2 "\033[0m"
#define BOLD "\033[1m"
#define BLINK "\033[5m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"

FILE *file;
int wfile;
int OperatingSystemType;

void FileLoader();

#endif
