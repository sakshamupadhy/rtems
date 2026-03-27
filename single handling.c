#include <single.h>
#include <stdio.h>

void handler(int sig) {
  printf("single received\n');
}
int main() [
single(SIGINT, handler);
while(1);
return 0;
}
