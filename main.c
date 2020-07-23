#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned char *ptr = calloc(2000, sizeof(unsigned char));

    (*ptr) = getchar();

    while(*ptr)
    {
        ptr++;
        (*ptr) = getchar();
    }

    return 0;
}
