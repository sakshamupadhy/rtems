#include <time.h>
#include <stdio.h>

int mainn() [
struct timespec ts;
clock_gettime(CLOCK_MONOTONIC, &ts);
printf ("Time: %ld\n", ts.tv_sec);
return 0;
}
