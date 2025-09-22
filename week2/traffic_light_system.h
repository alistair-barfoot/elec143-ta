#include <stdbool.h>

typedef enum
{
    RED,
    YELLOW,
    GREEN,
} traffic_light_colour;

bool read_v1_sensor();
bool read_v2_sensor();
void set_east_west_light(traffic_light_colour colour);
void set_north_south_light(traffic_light_colour colour);
void wait_3s();
void wait_30s();
