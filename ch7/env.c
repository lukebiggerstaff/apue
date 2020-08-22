#include "../apue.h"

int main(void)
{
    printf("putting env variables\n");
    putenv("GOLD=0");
    putenv("SILVER=1");
    printf("GOLD=%s\n", getenv("GOLD"));
    printf("SILVER=%s\n", getenv("SILVER"));
    printf("incrementing values\n");
    setenv("GOLD", "2", 0);
    setenv("SILVER", "3", 1);
    printf("adding copper\n");
    setenv("COPPER", "4", 0);
    printf("GOLD=%s\n", getenv("GOLD"));
    printf("SILVER=%s\n", getenv("SILVER"));
    printf("COPPER=%s\n", getenv("COPPER"));
    return 0;
}
