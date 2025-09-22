#include <stdio.h>

int main()
{
    int i;
    printf("i = ");
    scanf("%d", &i);

    int j;
    printf("j = ");
    scanf("%d", &j);

    int max_cycle_length = 0;

    for (int start_n = i; start_n <= j; start_n++)
    {
        // Think about why we need two separate variables "start_n" and "n"
        // here.
        int n = start_n;

        // You should increment this variable as you go, to keep track of the
        // cycle length for the current number that is being checked.
        int cycle_length = 1;

        // TODO: write your code here to accumulate the cycle length, using "n",
        // then update the value of "max_cycle_length" as needed.
        while(n != 1) {
          if(n % 2 == 0) {
            n = n / 2;
          } else {
            n = 3 * n + 1;
          }
          cycle_length += 1;
        }
        if(cycle_length > max_cycle_length) {
          max_cycle_length = cycle_length;
        }
      }

    printf("max cycle length = %d\n", max_cycle_length);

    return 0;
}
