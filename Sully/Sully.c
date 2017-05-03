#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(int argc, char **argv){
int i = 5;
argc = 0; if (strstr(argv[0], "Sully_") != NULL){i--;} char f[10] = "Sully_x.c\0"; char e[46] = "gcc -Wall -Wextra -Werror -o Sully_x Sully_x.c"; char b[8] = "Sully_x\0"; char t[10] = "./Sully_x\0"; char *c ="#include <stdio.h>%c#include <sys/types.h>%c#include <sys/stat.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <string.h>%cint main(int argc, char **argv){%cint i = %d;%cargc = 0; if (strstr(argv[0], %cSully_%c) != NULL){i--;} char f[10] = %c%s%c%c%c; char e[46] = %c%s%c; char b[8] = %c%s%c%c%c; char t[10] = %c%s%c%c%c; char *c =%c%s%c; f[6] = i + 48; int fd = open(f, O_CREAT | O_TRUNC | O_WRONLY, 0644); f[6] = 'x';dprintf(fd, c, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 34, f, 92, 48, 34, 34, e, 34, 34, b, 92, 48, 34, 34, t, 92, 48, 34, 34, c, 34, 10, 10, 10, 10); e[35] = i + 48; e[43] = i + 48; b[6] = i + 48; t[8] = i + 48; system(e); if(i >= 1){execlp(t, t, NULL);}}%c/*%chey%c*/%c"; f[6] = i + 48; int fd = open(f, O_CREAT | O_TRUNC | O_WRONLY, 0644); f[6] = 'x';dprintf(fd, c, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 34, f, 92, 48, 34, 34, e, 34, 34, b, 92, 48, 34, 34, t, 92, 48, 34, 34, c, 34, 10, 10, 10, 10); e[35] = i + 48; e[43] = i + 48; b[6] = i + 48; t[8] = i + 48; system(e); if(i >= 1){execlp(t, t, NULL);}}
/*
hey
*/
