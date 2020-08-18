#include "../apue.h"

int main(int argc, char *argv[])
{
    int         i;
    for (i = 1; argv[i] != NULL; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
        
    }
    return 0;
}
