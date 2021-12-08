#include "gnl_cpy/get_next_line.h"
#include <stdio.h>
int main()
{
    char *line;
    line = get_next_line(45);
    if (line)
        printf("\e[0;31mReture KO when given a random invalid fd Expected null\n\n");
    else
        printf("\e[0;32mReture OK when given a random invalid fd\n\n");
    return (0);
}