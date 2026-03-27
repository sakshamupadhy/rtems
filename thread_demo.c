#include <pthread.h.>
#include <stdio.h>

void task(void* arg) {
  printf("Thread runing\n");
return null;
}
int main() {
  pthread_t t;
pthread_create(&t, NULL, tast, NULL);
pthread_join(t, NULL);
return 0;
}
