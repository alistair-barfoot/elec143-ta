#include "traffic_light_system.h"
#include <stdio.h>
#include <stdlib.h>

static bool read_sensor(const char *prompt)
{
    while (true)
    {
        if (feof(stdin))
            exit(0);
        printf("%s? [y/n] ", prompt);
        char *line = NULL;
        if (scanf("%m[^\n]%*c", &line) < 1 || !line)
            continue;
        switch (line[0])
        {
        case 'y':
        case 'Y':
            return true;
        case 'n':
        case 'N':
            return false;
        }
    }
}

bool read_v1_sensor()
{
    return read_sensor("v1");
}

bool read_v2_sensor()
{
    return read_sensor("v2");
}

static traffic_light_colour east_west;
static traffic_light_colour north_south;

static const char *colour_name(traffic_light_colour colour)
{
    switch (colour)
    {
    case RED:
        return "RED";
    case YELLOW:
        return "YELLOW";
    case GREEN:
        return "GREEN";
    }
}

static void print_lights()
{
    printf("east/west: %s\n", colour_name(east_west));
    printf("north/south: %s\n", colour_name(north_south));
}

void set_east_west_light(traffic_light_colour colour)
{
    east_west = colour;
    print_lights();
}

void set_north_south_light(traffic_light_colour colour)
{
    north_south = colour;
    print_lights();
}

void wait_3s()
{
    printf("waiting 3 seconds...\n");
    // Not implementing this for now.
}

void wait_30s()
{
    printf("waiting 30 seconds...\n");
    // Not implementing this for now.
}
