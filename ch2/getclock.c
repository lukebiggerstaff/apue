#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf(" clock ticks = %ld", sysconf(_SC_CLK_TCK));
    return 0;
}
