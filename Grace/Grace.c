#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define FT int main(){char *f ="Grace_kid.c"; char *c ="#include <stdio.h>%c#include <sys/types.h>%c#include <sys/stat.h>%c#include <fcntl.h>%c#include <unistd.h>%c#define FT int main(){char *f =%c%s%c; char *c =%c%s%c;int fd = open(f, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, c, 10, 10, 10, 10, 10, 34, f, 34, 34, c, 34, 10, 10, 10, 10, 10, 10, 10);close(fd);}%c#define G%c#define H%c/*%chey%c*/%cFT%c";int fd = open(f, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, c, 10, 10, 10, 10, 10, 34, f, 34, 34, c, 34, 10, 10, 10, 10, 10, 10, 10);close(fd);}
#define G
#define H
/*
hey
*/
FT
