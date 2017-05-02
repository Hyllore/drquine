#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
int i = 5;
char f[10] = "Sully_x.c\0"; char *e = "gcc -o"; char b[8] = "Sully_x\0"; b[6] = i + 48; char t[10] = "./Sully_x\0"; t[8] = i + 48; f[6] = i + 48; char *c ="#include <stdio.h>%c#include <sys/types.h>%c#include <sys/stat.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main(){%cint i = %d;%cchar f[10] =%c%s%c%c; char *e = %c%s%c; char b[8] = %c%s%c%c; b[6] = i + 48; char t[10] = %c%s%c%c; t[8] = i + 48; f[6] = i + 48; char *c =%c%s%c; if (i >= 0) {int fd = open(f, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, c, 10, 10, 10, 10, 10, 10, 10, i - 1, 10, 34, f, 0, 34, 34, e, 34, 34, b, 0, 34, 34, t, 0, 34, 34, c, 34, 10, 10, 10, 10); execl(e, b, f);execlp(t, t, NULL);}}%c/*%chey%c*/%c"; if (i >= 1) {int fd = open(f, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, c, 10, 10, 10, 10, 10, 10, 10, i - 1, 10, 34, f, 0, 34, 34, e, 34, 34, b, 0, 34, 34, t, 0, 34, 34, c, 34, 10, 10, 10, 10); execl(e, b, f);execlp(t, t, NULL);}}
/*
hey
*/
