#include <stdio.h>
int test(){return(0);}
int main(){char *c ="#include <stdio.h>%cint test(){return(0);}%cint main(){char *c =%c%s%c;%c/*%chey%c*/printf(c, 10, 10, 34, c, 34, 10, 10, 10, 10, 10, 10, 10);test();}%c/*%cyo%c*/%c";
/*
hey
*/printf(c, 10, 10, 34, c, 34, 10, 10, 10, 10, 10, 10, 10);test();}
/*
yo
*/
