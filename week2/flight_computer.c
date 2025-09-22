#include "flight_computer.h"
#include <stdio.h>
#include <stdlib.h>

float get_pitch()
{
    if (feof(stdin))
        exit(0);
    printf("pitch = ");
    char *line = NULL;
    float f;
    if (scanf("%f", &f) >= 1)
        return f;
    return 0.0;
}

void set_warning_light(bool value)
{
    printf("warning light: %s\n", value ? "on" : "off");
}
