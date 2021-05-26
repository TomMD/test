#include <string.h>
#include <stdlib.h>

int f()
{	
    char *x = (char*) malloc(10);
    strcpy(x, "asdf");
    return 0;
}
