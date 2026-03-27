#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
    write(fd, "Hello RTEMS", 11);
    close(fd);
    return 0;
}
