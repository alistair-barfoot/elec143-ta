#include "traffic_light_system.h"
#include <stdio.h>

int main()
{
    while (true)
    {
        set_north_south_light(GREEN);
        set_east_west_light(RED);

        // We're going to ignore the "90s passed" condition for now.
        while (!(read_v1_sensor() || read_v2_sensor()))
        {
        }

        set_north_south_light(YELLOW);
        wait_3s();
        set_north_south_light(RED);
        wait_3s();
        set_east_west_light(GREEN);
        wait_30s();
        set_east_west_light(YELLOW);
        wait_3s();
        set_east_west_light(RED);
        wait_3s();
    }
}
