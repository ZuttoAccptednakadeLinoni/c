#include<stdio.h>
main()
{
    char *c="#include<stdio.h>%cmain()%c{%cchar *c=%c%s%c;%cprintf(c,10,10,10,34,c,34,10,10);%c}";
    printf(c,10,10,10,34,c,34,10,10);
}