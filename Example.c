#include <stdio.h>
#include "ExampleDep.h"

int main()
{
    char name[3] = "Lee";
    char *message = getMessage(name);
    printf("Message is %s \r\n", message);
    return 0;
}